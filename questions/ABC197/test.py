
from itertools import permutations

DEBUG_MODE = 0
MAX_NUM = 2**63-1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#int型で受け取るとき
N = int(input())

#入力変数の数がN個の場合
A = list(map(int, input().split()))

ans = MAX_NUM



# bit全探索
for i in range(2 ** (N-1)):  # 2^K乗通りを全探索
    l = []
    p  =[]
    for j in range(N):      # 各bitについて
        l.append(A[j])
        if ((i >> j) & 1):  # j番目のbitが1の場合
            #dish[D[j]] = 1            
            p.append(l)
            l=[]
            
        #else:               # j番目のbitが0の場合
            #dish[C[j]] = 1
    if  len(l)!=0:
        p.append(l)
    a = []
    for k in range(0,len(p)):
        
        p0=0
        for m in range(0, len(p[k])):
            p0 = p0 | p[k][m]
        a.append(p0)
    q=a[0]
    for n in range(1,len(a)):
        q=q^a[n]
    ans=min(ans,q)


print(ans)
#print(ans)
