from itertools import permutations

DEBUG_MODE = 0
MAX_NUM=2**63-1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)

def factorization(n):
    arr = []
    temp = n
    for i in range(2, int(-(-n**0.5//1))+1):
        if temp % i == 0:
            cnt = 0
            while temp % i == 0:
                cnt += 1
                temp //= i
            arr.append([i, cnt])

    if temp != 1:
        arr.append([temp, 1])

    if arr == []:
        arr.append([n, 1])

    return arr


N = int(input())
X = list(map(int, input().split()))

yakusuu = [0] * 100     #約数リスト

for i in range(0,N):
    l = factorization(X[i])     #素因数分解
    yakusuu[l[0][0]] = 1        #約数リストに最小の約数を突っ込む

ans=1

for i in range(0,100):
    if yakusuu[i] == 1:         #約数リストに載ってる約数を順にかける
        ans*=i

print(ans)
