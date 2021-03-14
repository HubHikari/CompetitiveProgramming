
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
A, B = [list(i) for i in zip(*xy)]

C=[]
D=[]

for i in range(0,N):
    C.append(A[i]+B[i])
    D.append([A[i],B[i]])

C.sort()
D.sort()

ans=MAX_NUM
for i in range(1,N):
    ans=min(ans,D[i][1])

ans=min(max(ans,D[0][0]),C[0])

print(ans)




