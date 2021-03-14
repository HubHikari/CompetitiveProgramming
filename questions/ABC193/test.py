from itertools import permutations

DEBUG_MODE = 1

MAX_NUM=2**63-1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#int型で受け取るとき
N = int(input())

ans=0
for i in range(2,N):
    if i*i>N:
        break
    k=int(N**(1/i))
    if k<=2:
        continue
    ans+=k-i+1

DBG(N-ans)





