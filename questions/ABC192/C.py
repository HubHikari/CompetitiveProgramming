from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#文字列として受け取るとき
N, k = input().split()

K=int(k)

ans=N

for i in range(0,K):
    max = sorted(ans)
    min=sorted(ans,reverse=True)
    mojiretu = ''.join(max)
    mojiretu2 = ''.join(min)
    p=int(mojiretu2)-int(mojiretu)
    ans=str(p)
print(ans)




