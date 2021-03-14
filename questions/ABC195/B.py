from itertools import permutations
import math
DEBUG_MODE = 1

MAX_NUM = 2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#入力変数が整数の場合
A,B,W = map(int, input().split())

W=W*1000
'''
if W//A==W//B:
    print("UNSATISFIABLE")
    exit()
'''

min=math.ceil(W/B)

max=W//A

print(min)

print(max)


