from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)




#列に変数が並ぶとき
H, W, K, = map(int, input().split())

h = []
w = []
c = []
for i in range(0, K):
    p, q, r = map(str, input().split())
    h.append(int(p))
    w.append(int(q))
    c.append(r)


dp = [[0] * (W+1) for i in range(H+1)]
map = [[0] * (W+1) for i in range(H+1)]

for i in range(0, K):
    map[h[i]][w[i]]=c[i]

dp[1][1] = 1

DBG(dp)

for i in range(1, H + 1):
    for j in range(1, W + 1):
        if i == 1:
            if j == 1:
                continue
        if map[i][j - 1] == 'D':
            if map[i - 1][j] == 'R':
                dp[i][j] = 0
            else:
                dp[i][j] = dp[i - 1][j]
        elif map[i-1][j] == 'R':
            if map[i][j-1] == 'D':
                dp[i][j] = 0
            else:
                dp[i][j] = dp[i][j - 1]             
        elif :
            dp[i][j] = dp[i][j-1]*2 + dp[i-1][j]*2
        
DBG(dp)
