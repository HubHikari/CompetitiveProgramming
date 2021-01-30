from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#int型で受け取るとき
M = int(input())

#列に変数が並ぶとき
op1 = []
op2 = []
op1.append(0)
op2.append(0)

for i in range(0, N):
    s = input()

    if len(s)>2:
        p, q = map(int, s.split())
    else:
        p=int(s)
        q=0

    op1.append(p)
    op2.append(q)


