from itertools import permutations
import math
import heapq


DEBUG_MODE = 0


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)

a=[]
heapq.heapify(a) 

#int型で受け取るとき
N = int(input())



#(N,1)行列データ
A = list(map(int, input().split()))
DBG(A)


m=min(A)
A.append(m)

for i in range(0,len(A)):
    for j in range(i+1,len(A)):
        k=math.gcd(A[i],A[j])
        a.append(k)
a.sort()

DBG(a)
ans=0
p=0
for i in range(0,len(a)):
    if a[i]==m:
        ans+=1
        break
    if a[i]!=p:
        ans+=1
        p=a[i]


print(ans)

