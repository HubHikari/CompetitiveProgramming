from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#int型で受け取るとき
X = int(input())


print(100-(X%100))

