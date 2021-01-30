
from itertools import permutations

DEBUG_MODE = 0


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#列に変数が並ぶとき
N, X = map(int, input().split())
xy = [map(int, input().split()) for _ in range(N)]
V, P = [list(i) for i in zip(*xy)]


X=X*100
sum=0

for i in range(0,N):
    sum=sum+V[i]*P[i]
    DBG(sum)
    if sum>X:
        print(i+1)
        exit()
print("-1")