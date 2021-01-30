from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


# int型で受け取るとき
N = int(input())


# (N,1)行列データ
A = [0, ] + list(map(int, input().split()))


ans = 0
max = 0


for i in range(2, 1001):
    gcd = 0
    for j in range(1, len(A)):
        if A[j] % i == 0:
            gcd += 1
    if gcd > max:
        max = gcd
        ans = i

print(ans)

a=a+1

