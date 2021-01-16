from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#列に変数が並ぶとき
N = int(input())
xy = [map(int, input().split()) for _ in range(N)]
A, B = [list(i) for i in zip(*xy)]

hyou = []

for i in range(N):
    hyou.append(A[i] * 2 + B[i])
hyou.sort(reverse=True)

DBG(hyou)

score = -sum(A)
DBG(score)
ans = 0
for i in range(N):
    score = score + hyou[i]
    ans = ans + 1
    if score > 0:
        break
    DBG(score)
    
print(ans)
