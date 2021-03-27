from itertools import permutations

DEBUG_MODE = 0

MAX_NUM = 2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#入力変数が整数の場合
H, W,X,Y = map(int, input().split())

X=X-1
Y=Y-1

S = [input() for _ in range(H)]

DBG(S)

ans=0




for i in range(Y+1,W):
    if S[X][i]=="#":
        break
    ans+=1


for i in range(Y-1, -1,-1):
    if S[X][i] == "#":
        break
    ans += 1


for i in range(X+1, H):
    if S[i][Y] == "#":
        break
    ans += 1

for i in range(X-1, -1, -1):
    if S[i][Y] == "#":
        break
    ans += 1



ans=ans+1
print(ans)



