from itertools import permutations

DEBUG_MODE = 1

MAX_NUM=2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)




#入力変数が整数の場合
A, B,C = map(int, input().split())

if A*A+B*B < C*C:
    print("Yes")
else:
    print("No")
