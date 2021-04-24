from itertools import permutations

DEBUG_MODE = 1

MAX_NUM = 2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#int型で受け取るとき
N = int(input())


#(N,1)行列データ
A = list(map(int, input().split()))
B = list(map(int, input().split()))

maxA=max(A)
minB=min(B)

ans=max(0,minB-maxA+1)

print(ans)


