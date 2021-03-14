
from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#入力変数が整数の場合
N, X = map(int, input().split())


#(N,1)行列データ
A = list(map(int, input().split()))
B=[]
l=len(A)

for i in range(0,l):
    if A[i]!=X:
        B.append(A[i])
        
for i in range(0,len(B)):
    if i!=len(B)-1:
        s=str(B[i])+" "
    else:
        s=str(B[i])
    print(s, end="")
