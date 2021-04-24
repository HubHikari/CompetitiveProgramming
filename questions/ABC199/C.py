from itertools import permutations
from typing import Awaitable

DEBUG_MODE = 1

MAX_NUM = 2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#int型で受け取るとき
N = int(input())
#str型で受け取るとき
S = input()
#int型で受け取るとき
Q = int(input())



xy = [map(int, input().split()) for _ in range(Q)]
T,A,B = [list(i) for i in zip(*xy)]


#S[3]="a"
DBG(S)


for i in range(0,Q):
    A[i]-=1
    B[i]-=1


for i in range(0,Q):
    if T[i]==1:
        p = S[A[i]]
        q = S[B[i]]
        S = S[:A[i]]+q+S[A[i]+1:B[i]]+p+S[B[i]+1:]
        DBG(S)
    elif T[i]==2:
        S = S[N:]+S[0:N]
        DBG(S)

print(S)

