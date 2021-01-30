from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


# 入力変数が整数の場合
A, B = map(int, input().split())

ans = (2*A+100)-B

print(ans)


A = A+2
