from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


# int型で受け取るとき
N = int(input())


if N % 2 == 0:
    print("White")
else:
    print("Black")
