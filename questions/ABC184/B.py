N,X = map(int, input().split())
S = input()

score=X

for i in range(0,N):
    if S[i]=='x':
        if score>=1:
            score=score-1
    if S[i]=='o':
        score=score+1

print(score)
