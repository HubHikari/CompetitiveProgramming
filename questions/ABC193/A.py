from itertools import permutations

DEBUG_MODE = 1

MAX_NUM=2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#入力変数が整数の場合
A, B = map(int, input().split())

ans=(1-B/A)*100

print(ans)
