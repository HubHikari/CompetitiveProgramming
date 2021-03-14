
from itertools import permutations

DEBUG_MODE = 1

MAX_NUM=2**63-1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#int型で受け取るとき
N = int(input())



#入力変数の数がN個の場合
f = [0, ] + list(map(int, input().split()))

kumi=[]

for i in range(0,N+1):
    kumi.append([i,f[i]])

goflag=[0]*20

ans=0

for i in range(1,N+1):
    DBG(i)
    nowpoint=i
    if goflag[i]!=1:
        firstpoint=nowpoint
        while goflag[nowpoint]!=1:
            goflag[nowpoint] = 1
            nowpoint = kumi[nowpoint][1]
            if nowpoint==firstpoint:
                ans+=1

    
DBG(goflag)
DBG(ans)
a = (2**ans-1) % 998244353
print(a)


