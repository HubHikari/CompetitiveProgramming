from collections import deque
from itertools import product



h, w = map(int, input().split())
s = [input() for _ in range(h)]


ans=0

for i in range(0,h-1):
    for j in range(0,w-1):
        num=0
        if s[i][j]=="#":
            num+=1
        if s[i+1][j]=="#":
            num+=1
        if s[i][j+1]=="#":
            num+=1
        if s[i+1][j+1]=="#":
            num+=1   
        if num==1:
            ans+=1
        elif num==3:
            ans+=1
print(ans)
        