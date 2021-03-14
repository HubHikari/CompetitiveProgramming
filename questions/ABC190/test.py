from itertools import permutations

DEBUG_MODE = 0


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


# 列に変数が並ぶとき
N, M = map(int, input().split())
xy = [map(int, input().split()) for _ in range(M)]
A, B = [list(i) for i in zip(*xy)]


# 列に変数が並ぶとき
K = int(input())
xyz = [map(int, input().split()) for _ in range(K)]
C, D = [list(i) for i in zip(*xyz)]

ans = 0

# bit全探索
for i in range(2 ** K):  # 2^K乗通りを全探索
    nowans = 0
    dish = [0]*(N+1)
    for j in range(K):      # 各bitについて
        if ((i >> j) & 1):  # j番目のbitが1の場合
            dish[D[j]] = 1
        else:               # j番目のbitが1の場合
            dish[C[j]] = 1

    for p in range(0, M):
        if dish[A[p]] > 0:
            if dish[B[p]] > 0:
                nowans += 1

    ans = max(ans, nowans)

print(ans)
