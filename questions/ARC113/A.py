from itertools import permutations

DEBUG_MODE = 1

MAX_NUM=2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


'''
#int型で受け取るとき
K = int(input())

A=1
B=1
C=1

while A*A*A<K:
    newK=K//A
    B=A
    ans=0
    wari=1
    while B*B<newK:
        ans+=(newK-newK//(wari))*(wari-1)
        wari+=1
        B+=1
    A+=1
'''
K = int(input())

E=K
ans=0
wari=1
newK=K
while wari*wari<=K:
    ans+=(newK-newK//(wari+1))*(wari)
    wari+=1
    newK=K//(wari+1)
    E-=1
print(ans)


