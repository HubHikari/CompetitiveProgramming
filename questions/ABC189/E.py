from itertools import permutations
from typing import Awaitable
import numpy as np


DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#int型で受け取るとき
N = int(input())

#列に変数が並ぶとき
X = []
Y = []
X.append(0)
Y.append(0)

for i in range(0, N):
    p, q = map(int, input().split())
    X.append(p)
    Y.append(q)

#int型で受け取るとき
M = int(input())

#列に変数が並ぶとき
op1 = []
op2 = []
op1.append(0)
op2.append(0)

for i in range(0, M):
    s = input()

    if len(s) > 2:
        p, q = map(int, s.split())
    else:
        p = int(s)
        q = 0

    op1.append(p)
    op2.append(q)

Q = int(input())
A = []
B = []
A.append(0)
B.append(0)
for i in range(0, Q):
    p, q = map(int, input().split())
    A.append(p)
    B.append(q)

DBG(X)
DBG(Y)
DBG(op1)
DBG(op2)
DBG(A)
DBG(B)


