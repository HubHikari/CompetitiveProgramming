from itertools import permutations

DEBUG_MODE = 0


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)

MAX=300010

#(N,1)行列データ
N, K = map(int, input().split())
A = list(map(int, input().split()))

count = [0] * (MAX + 1)

for i in range(len(A)):
    count[A[i]] += 1

DBG(count)

now = min(count[0],K)
maxnum=0

for i in range(0, MAX + 1):
    if count[i] > now:
        count[i] = now
    now = count[i]
    if now == 0:
        maxnum=i
        break

DBG(count)
DBG(maxnum)

ans = 0
nowK = 0
flag=0
for j in reversed(range(0, maxnum)):
    if count[j] > nowK:
        '''
        if count[j] > K:
            count[j] = K
            flag=1
        '''
        ans += (count[j] - nowK) * ((j + 1))
        nowK = count[j]

        #DBG(ans)

    
DBG(ans)
DBG(nowK)
print(ans)




