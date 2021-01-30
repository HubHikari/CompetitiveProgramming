from itertools import permutations

DEBUG_MODE = 0


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#(N,1)行列データ
N = int(input())
A = [0,] + list(map(int, input().split()))
B = [0, ] + list(map(int, input().split()))
DBG(A)
DBG(B)

p = A[1]
q = B[1]
pMax = 0
qMax = 0
ans = 0
nowMax = 0

for i in range(1, N + 1):
    p = A[i]
    q = B[i]
    ans = max(p* q, pMax * q)
    ans = max(ans, nowMax)
    pMax = max(pMax, p)
    nowMax=ans
    
    print(ans)

