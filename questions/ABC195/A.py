from itertools import permutations

DEBUG_MODE = 1

MAX_NUM=2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)




#入力変数が整数の場合
M, H = map(int, input().split())

if H%M==0:
    print("Yes")
else:
    print("No")