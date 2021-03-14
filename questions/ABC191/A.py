from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)




#入力変数が整数の場合
V, T,S,D = map(int, input().split())


if V*S>=D:
    if V*T<=D:
        print("No")
        exit()
print("Yes")

