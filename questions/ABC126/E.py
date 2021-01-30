import sys
from itertools import permutations

DEBUG_MODE = 0


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


sys.setrecursionlimit(2*10**6)

#Union-Find木
class UF():
    #初期化
    def __init__(self, num):
        self.par = [-1]*(num+1)
        self.size = [1]*(num+1)

    #検索
    def find(self, x):
        if self.par[x] < 0:
            return x
        else:
            x = self.par[x]
            return self.find(x)

    #頂点結合
    def union(self, x, y):
        rx = self.find(x)
        ry = self.find(y)
        if rx != ry:
            if self.par[rx] < self.par[ry]:
                self.par[ry] = rx
                self.size[rx] += self.size[ry]
            elif self.par[rx] > self.par[ry]:
                self.par[rx] = ry
                self.size[ry] += self.size[rx]
            else:
                self.par[rx] -= 1
                self.par[ry] = rx
                self.size[rx] += self.size[ry]
        return


N, M = map(int, input().split())

#Union-Find初期化
G = UF(N)

#頂点結合
for _ in range(M):
    x, y, _ = map(int, input().split())
    G.union(x, y)

DBG(set([G.find(i) for i in range(1, N + 1)]))
print(len(set([G.find(i) for i in range(1, N + 1)])))
