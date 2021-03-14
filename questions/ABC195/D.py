from itertools import permutations
from bisect import bisect_left
DEBUG_MODE = 1

MAX_NUM=2**63-1


def index(lst, e):
    # Step 1. bisect_left して
    i = bisect_left(lst, e)

    # Step 2. 変な値を ValueError で弾いて
    if i == len(lst):
        raise ValueError
    if lst[i] != e:
        raise ValueError

    # Step 3. 値を返す。
    return i
def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#入力変数が整数の場合
N, M, Q = map(int, input().split())

#列に変数が並ぶとき

xy = [map(int, input().split()) for _ in range(N)]
W, V = [list(i) for i in zip(*xy)]




#入力変数の数がN個の場合
X =  list(map(int, input().split()))


#列に変数が並ぶとき
xyz = [map(int, input().split()) for _ in range(Q)]
Q1, Q2 = [list(i) for i in zip(*xyz)]


VW = []
for i in range(0, N):
    VW.append([V[i], W[i]])

VW.sort(reverse=True)

#X2=X[0:Q1[0]]+X[Q2[0]+1:-1]
X2 = X[0:Q1[0]-1]+X[Q1[0]:-1]


X2.sort()
DBG(X2)
DBG(bisect_left(X2, 2))

for i in range(0,len(VW)):
    if 
    X2.pop(bisect_left(X2, VW[i][1]))



