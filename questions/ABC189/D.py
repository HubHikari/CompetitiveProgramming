from itertools import permutations

DEBUG_MODE = 0


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#int型で受け取るとき
N = int(input())

#文字列として受け取るとき

S=[]
S.append("no")

for i in range(0,N):
    C = input()
    S.append(C)


DBG(S)


A = [0] * (N+2)
B = [0] * (N+2)

A[0]=1
B[0]=1

for i in range(1,N+1):
    if S[i]=="AND":
        A[i]=A[i-1]
        B[i]=A[i-1]+B[i-1]*2
    else:
        A[i] = A[i-1]*2+B[i-1]
        B[i]=B[i-1]
    DBG("now")
    DBG(i)
    DBG(A)
    DBG(B)
print(A[N])




