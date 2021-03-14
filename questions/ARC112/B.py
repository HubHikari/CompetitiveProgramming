
from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#入力変数が整数の場合
B, C = map(int, input().split())
ans=0

if B<0:
    if C==1:
        ans=2
    else:
        ans=1+C//2+(C-1)//2+min(abs(B)*2,(C-1)//2+(C-2)//2)


elif B==0:
    if C==0:
        ans=1
    else:
        ans=1+C//2+(C-1)//2
    
else:
    if C==1:
        ans=2
    else:
        ans=1+min(2*B,C//2+(C+1)//2)+(C-1)//2+(C-2)//2

print(ans)