from itertools import permutations
import math
DEBUG_MODE = 0

MAX_NUM = 2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#str型で受け取るとき
N = int(input())


#入力変数が整数の場合
x0, y0 = map(int, input().split())
x2n, y2n = map(int, input().split())


xhalf=(x0+x2n)/2
yhalf=(y0+y2n)/2

xdiff=x0-xhalf
ydiff=y0-yhalf

DBG(xdiff)
DBG(ydiff)

angle=360/N

#x0, y0 = map(int, input().split())

a = math.cos(math.radians(angle))*xdiff-math.sin(math.radians(angle))*ydiff
b = math.sin(math.radians(angle))*xdiff+math.cos(math.radians(angle))*ydiff
DBG(a)
DBG(b)

xans=a+xhalf
yans=b+yhalf

print(xans)
print(yans)


