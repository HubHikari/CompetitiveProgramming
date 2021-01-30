from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#str型で受け取るとき
s = input()


if s[0]==s[1]:
    if s[1]==s[2]:
        print("Won")
        exit()
print("Lost")

