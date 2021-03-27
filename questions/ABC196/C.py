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



for i in range(1,10**6):
    num = i*(10**len(str(i)))+i
    if num<=N:
        ans+=1

print(ans)
