import sys
readline = sys.stdin.readline

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)

N, M = map(int, readline().split())
A = list(map(int, readline().split()))
Edge = [[] for _ in range(N)]
for _ in range(M):
    x, y = map(int, readline().split())
    x -= 1
    y -= 1
    Edge[x].append(y)

INF = 10**18+3
dp = [INF]*N
ans = -INF
for i in range(N):
    ans = max(ans, A[i] - dp[i])
    dp[i] = min(dp[i], A[i])
    for j in Edge[i]:
        dp[j] = min(dp[i], dp[j])
    
    DBG(dp)

print(ans)
