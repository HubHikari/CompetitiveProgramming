from itertools import permutations

DEBUG_MODE = 1

MAX_NUM=2**63-1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#int型で受け取るとき
N = int(input())


ans=0.5


for i in range(1,N):
    ans = ans*((i+1)/i)*((i+1)/i)

print(ans)
