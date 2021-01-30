from collections import deque
import sys
from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


sys.setrecursionlimit(10**6)
N = int(input())
V = [[] for _ in range(N)]
W = [[] for _ in range(N)]
for i in range(N-1):
    u, v, w = map(int, input().split())
    u -= 1
    v -= 1
    V[u].append(v)
    V[v].append(u)
    W[u].append(w)
    W[v].append(w)
ans = [-1]*N
ans[0] = 0


def dfs(parent, now):
    for i in range(len(V[now])):
        next_node = V[now][i]
        next_weight = W[now][i]
        if next_node == parent:
            continue
        if (ans[now]+next_weight) % 2 == 0:
            ans[next_node] = 0
        else:
            ans[next_node] = 1
        dfs(now, next_node)


dfs(-1, 0)
for i in range(N):
    print(ans[i])
