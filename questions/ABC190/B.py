
from itertools import permutations

DEBUG_MODE = 0


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)




#列に変数が並ぶとき
N, S, D  = map(int, input().split())
xy = [map(int, input().split()) for _ in range(N)]
x, y = [list(i) for i in zip(*xy)]
x = [0, ] + x
y = [0, ] + y


for i in range(1,N+1):
    DBG(x[i])
    DBG(y[i])
    if x[i]<S:
        if y[i]>D:
            print("Yes")
            exit()
print("No")
