from itertools import permutations

DEBUG_MODE = 0

MAX_NUM=2**63-1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#入力変数の数がN個の場合
N=int(input())
A = list(map(int, input().split()))

s1=sum(A)

A2=[]

for i in range(0,N):
    A2.append(A[i]*A[i])

s2=sum(A2)


Ai=(N-1)*s2


DBG(Ai)

kake=[]

for i in range(0,N):
    kake.append(A[i]*(s1-A[i]))

DBG(sum(kake))

ans=Ai-sum(kake)

print(ans)
