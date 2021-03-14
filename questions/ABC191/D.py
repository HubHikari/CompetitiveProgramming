from itertools import permutations
import math

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#入力変数が整数の場合
X, Y, R = map(float, input().split())

ans=0

def is_ok(b,a,R):
   return a*a+b*b<=R*R

min=int(math.ceil(abs(Y))-R)
max=int(math.ceil(abs(Y))+R)
for a in range(min,max+1):
    right=0
    left=0
    ng = X
    ok = X+R+1
    while ng-ok > 1:
        mid = (ok+ng) // 2 # 平均(小数切り捨て)
        if is_ok(mid,a,R):
            ok = mid
        else:
            ng = mid
    DBG(ok)
    right=ok
    ng = X-R-1
    ok = X
    while ng-ok > 1:
        mid = (ok+ng) // 2 # 平均(小数切り捨て)
        if is_ok(mid,a,R):
            ok = mid
        else:
            ng = mid
    DBG(ok)
    ans+=right-left

DBG(ans)

