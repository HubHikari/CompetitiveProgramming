from itertools import permutations
import math
DEBUG_MODE = 1

MAX_NUM = 2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#入力変数が整数の場合
A, B, W = map(int, input().split())

W = W*1000

i=0

min_ans=MAX_NUM
max_ans=0

while True:
    minn=A*i
    maxn=B*i

    if maxn>=W:
        if minn > W:
            if min_ans == MAX_NUM:
                print("UNSATISFIABLE")
                exit()
        min_ans=min(i,min_ans)
    if minn>W:
        max_ans=max(i-1,max_ans)
        break
    i+=1


s=str(min_ans)+" "+str(max_ans)
print(s)



