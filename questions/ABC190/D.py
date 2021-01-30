from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#int型で受け取るとき
N = int(input())

N=abs(N)*2

yaku=0


for i in range(1,N+1):
    if N%i==0:
        yaku+=1
    if i*i>N:
        break

print(yaku)




