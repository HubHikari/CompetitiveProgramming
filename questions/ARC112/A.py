from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#int型で受け取るとき
T = int(input())


#列に変数が並ぶとき
xy = [map(int, input().split()) for _ in range(T)]
L, R = [list(i) for i in zip(*xy)]

for i in range(0,T):
    P=R[i]-2*L[i]
    if P<0:
        print(0)
        continue

    ans=(P+2)*(P+1)//2

    print(ans)



