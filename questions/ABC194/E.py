from itertools import permutations
from queue import Queue
DEBUG_MODE = 1

MAX_NUM=2**63-1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#入力変数が整数の場合
N, M = map(int, input().split())

#入力変数の数がN個の場合
A = list(map(int, input().split()))


q = Queue()

for i in range(0,M):
    q.put(A[i])

while not q.empty():
    DBG(q.get())
