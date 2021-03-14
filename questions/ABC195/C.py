from itertools import permutations

DEBUG_MODE = 0

MAX_NUM=2**63-1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)

N = int(input())

ans=0

i=-1

a=N

while a>0:
    a=a//1000
    i+=1

DBG(i)

ans=(N-(1000**i-1))*i
DBG(ans)
#i-=1

while i>1:
    ans+=((1000**i)-(1000**(i-1)))*(i-1)
    i-=1
    DBG(ans)

print(ans)