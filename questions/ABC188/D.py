from itertools import permutations

DEBUG_MODE = 0


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#列に変数が並ぶとき
N, C = map(int, input().split())
xy = [map(int, input().split()) for _ in range(N)]
a, b, c = [list(i) for i in zip(*xy)]

event = []

for i in range(N):
    event.append([a[i], c[i]])
    event.append([b[i]+1, -c[i]])

event.sort()

DBG(event)

nowcost = 0
ans=0
nowday = event[0][0]
realcost=0

for i in range(0, len(event)):
    ans = ans + (event[i][0] - nowday) * realcost
    nowcost = nowcost + event[i][1]
    nowday=event[i][0]
    realcost = min(nowcost, C)
    DBG("dbg")
    DBG(realcost)
    DBG(ans)
print(ans)
    
