
from itertools import permutations

DEBUG_MODE = 1

MAX_NUM=2**63-1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)




#列に変数が並ぶとき
N=int(input())
xy = [map(int, input().split()) for _ in range(N)]
A,P,X = [list(i) for i in zip(*xy)]

ans=MAX_NUM

for i in range(0,N):
    if X[i]-A[i]<=0:
        continue
    ans=min(ans,P[i])

if ans==MAX_NUM:
    print(-1)
    exit()

print(ans)


    
