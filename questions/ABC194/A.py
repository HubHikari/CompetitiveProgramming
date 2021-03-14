from itertools import permutations

DEBUG_MODE = 1

MAX_NUM=2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#入力変数が整数の場合
A, B = map(int, input().split())

A=A+B

if A>=15:
    if B>=8:
        print("1")
        exit()

if A>=10:
    if B>=3:
        print("2")
        exit()

if A>=3:
    print("3")
    exit()

print("4")

