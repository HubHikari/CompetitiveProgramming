from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)




#(N,1)行列データ
A = [0, ] + list(map(int, input().split()))
print(A)

13 2
0 0 0 1 1 1 2 2 2 2 3 4 4
