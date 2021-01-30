from collections import deque
import sys
from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


# 深さ優先探索（行きがけ、帰りがけ）
input = sys.stdin.readline

# グラフの作成(無向グラフでは#を消す)
N = int(input())
graph = [deque([]) for _ in range(N + 1)]   #グラフ保存
for _ in range(N):
    u, k, * v = [int(x) for x in input().split()]  # uは頂点番号、kは隣接頂点の個数
    v.sort()

    #グラフ追加
    for i in v:
        graph[u].append(i)
        # graph[i].append(u) # 無向グラフ

time = 0
arrive_time = [-1] * (N + 1)  # 到着時刻
finish_time = [-1] * (N + 1)  # 探索終了時刻

DBG(graph)

# 深さ優先探索

def dfs(v):
    global time
    time += 1               #時間追加
    stack = [v]             #初期探索頂点
    arrive_time[v] = time  #頂点への到達時刻
    #探索スタックに頂点が残っている間
    while stack:
        v = stack[-1]   #スタックから頂点を取り出す
        if graph[v]:    #未探索の頂点が存在する場合
            w = graph[v].popleft()  #頂点を1個取り出す
            if arrive_time[w] < 0:  #未到達の場合
                time += 1           #時刻+1
                arrive_time[w] = time   #到達時刻保存
                stack.append(w)     #スタックに頂点追加
        else:           #全部探索済みの場合
            time += 1               #時刻+1
            finish_time[v] = time   #最終時刻
            stack.pop()             #スタックから削除
    return [arrive_time, finish_time]


# 孤立している頂点対策
for i in range(N):
    if arrive_time[i + 1] < 0:
        ans = dfs(i + 1)

# 頂点番号、到着時刻、終了時刻
for j in range(N):
    temp = [j + 1, ans[0][j + 1], ans[1][j + 1]]
    print(* temp)
