from itertools import permutations

DEBUG_MODE = 1

MAX_NUM=2**63-1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)



#int型で受け取るとき
N = int(input())
'''
n = N
prime = [i for i in range(2, n)]

for i in range(2,n):
    if i in prime:
        for j in range(i*2, n, i):
            if j in prime:
                prime.remove(j)
DBG(prime[0])
'''

prime=[]

