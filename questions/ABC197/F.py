from itertools import permutations

DEBUG_MODE = 1

MAX_NUM = 2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#str型で受け取るとき
N = input()
#int型で受け取るとき
N = int(input())
#float型　(小数)で受け取るとき
N = float(input())


#list型で受け取るとき
A = ["", ] + input().split()
DBG(A)
DBG(A[1])
DBG(A[1][0])


#文字列として受け取るとき
A, B, C = input().split()
DBG(A)
DBG(B)


#入力変数が整数の場合
A, B = map(int, input().split())
DBG(A)
DBG(B)


#入力変数の数がN個の場合
X = [0, ] + list(map(int, input().split()))
DBG(X)


#文字列と数字の複合
N, S = map(str, input().split())


#(N,1)行列データ
A = [0, ] + list(map(int, input().split()))
DBG(A)


#(N,M)行列データ
N, M = map(int, input().split())
K = [[0] * (N + 1)] + [[0, ] + list(map(int, input().split(" ")))
                       for i in range(N)]
DBG(K)
DBG(K[1][1])


#列に変数が並ぶとき
N, M = map(int, input().split())
xy = [map(int, input().split()) for _ in range(N)]
x, y = [list(i) for i in zip(*xy)]
X = [0, ] + x
Y = [0, ] + y
DBG(X)
DBG(Y[1]+Y[1])
