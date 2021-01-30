from itertools import permutations

DEBUG_MODE = 0


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#入力変数が整数の場合
A, B,C = map(int, input().split())
DBG(A)
DBG(B)

if C==0:
    if A<=B:
        print("Aoki")
    else:
        print("Takahashi")
elif C == 1:
    if A >= B:
        print("Takahashi")
    else:
        print("Aoki")
