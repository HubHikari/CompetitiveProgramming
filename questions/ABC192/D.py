from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#str型で受け取るとき
X = input()
M = int(input())


def is_ok(i):
    ans=0
    for j in range(0,len(X)):
        ans+=int(X[len(X)-j-1])*(i ** j)

    #print(ans)
    return ans <= M

m=0
for i in range(0,len(X)): 
    m=max(m,int(X[i]))

if len(X)==1:
    if is_ok(m+1):
        print(1)
    else:
        print(0)
    exit()


ok = m
ng = M*10

while ng-ok > 1:
    mid = (ok+ng) // 2 # 平均(小数切り捨て)
    if is_ok(mid):
        ok = mid
    else:
    	ng = mid
#print(ok,ng) # "5 6" が出力される
print(ok-m)