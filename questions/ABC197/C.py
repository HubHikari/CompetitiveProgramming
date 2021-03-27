from itertools import permutations

DEBUG_MODE = 1

MAX_NUM = 2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#int型で受け取るとき
N = int(input())


#入力変数の数がN個の場合
A = list(map(int, input().split()))

ans=MAX_NUM

i=1
while i<N:
    len1=A[0:i]
    len2=A[i:N]
    DBG(len1)
    DBG(len2)
    p0=0
    p1=0
    for j in range(0,len(len1)):
        p0=p0|len1[j]
    for j in range(0,len(len2)):
        p1=p1|len2[j]
    ans = min(ans, p0 ^ p1)
    DBG(ans)
    i+=1

print(ans)

'''
for i in range(1,N):
    DBG(A[0:i])
    p0=0
    p1=0
    for j in range(0,i):
        p0=p0 |A[j]
    DBG(p0)
    for k in range(i,N):
        p1=p1|A[k]
    DBG(p1)
    ans=min(ans,p0^p1)
    DBG(ans)

print(ans)

'''
