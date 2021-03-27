
from itertools import permutations

DEBUG_MODE = 1

MAX_NUM=2**63-1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#str型で受け取るとき
X = input()


ans=0


for i in range(0,len(X)):
    if X[i]==".":
        break
    ans=ans*10+int(X[i])

print(ans)
