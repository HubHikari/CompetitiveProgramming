
from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#str型で受け取るとき
S = input()


for i in range(0,len(S)):
    if i%2==0:
        if S[i].isupper()==True:
            print("No")
            exit()
    else:
        if S[i].isupper()==False:
            print("No")
            exit()
print("Yes")
