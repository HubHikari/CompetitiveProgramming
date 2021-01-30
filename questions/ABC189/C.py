from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#int型で受け取るとき
N = int(input())


#(N,1)行列データ
A = [0, ] + list(map(int, input().split()))
DBG(A)

