from itertools import permutations

DEBUG_MODE = 1

MAX_NUM=2**63-1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#列に変数が並ぶとき
N=int(input())
xy = [map(int, input().split()) for _ in range(N)]
x, y = [list(i) for i in zip(*xy)]
a = [0, ] + x
t = [0, ] + y

Q = int(input())
#入力変数の数がN個の場合
x = [0, ] + list(map(int, input().split()))


DBG(a)
DBG(t)
DBG(x)

