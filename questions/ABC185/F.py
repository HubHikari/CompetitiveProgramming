from itertools import permutations

DEBUG_MODE = 0


#列に変数が並ぶとき
N, Q = map(int, input().split())
A = list(map(int, input().split()))
A[0:0]=[0,]

xy = [map(int, input().split()) for _ in range(Q)]
T, X, Y = [list(i) for i in zip(*xy)]
T[0:0] = [0,]
X[0:0] = [0,]
Y[0:0] = [0, ]


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


DBG(A)
DBG(T)
DBG(X)
DBG(Y)

for i in range(1,Q+1):
    if T[i] == 1:
        A[X[i]] = A[X[i]] ^ Y[i]
    elif T[i] == 2:
        ans = A[X[i]]
        DBG(ans)
        for j in range(X[i] + 1, Y[i] + 1):
            DBG(A[j])
            ans = ans ^ A[j]
            DBG(ans)
        print(ans)
    #DBG(A)
