from itertools import permutations

DEBUG_MODE = 1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)

#(N,M)行列データ
N,K = map(int, input().split())
T = [list(map(int, input().split(" "))) for i in range(N)]
DBG(T)

list = [1, 2, 3, 4, 5, 6, 7, 8]
a=[]
for i in range(N-1):
    a.append(list[i])


per = permutations(a, N - 1)
ans = 0

for i in per:
    dist = 0
    i_add = (0,)+i+(0,)
    DBG(i_add)
    for j in range(1, N+1):
        dist = dist + T[i_add[j - 1]][i_add[j]]
        if dist == K:
            ans=ans+1

print(ans)

