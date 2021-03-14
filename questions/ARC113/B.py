
from itertools import permutations

DEBUG_MODE = 0

MAX_NUM=2**63-1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)




#入力変数が整数の場合
A, B,C = map(int, input().split())


A=A%10
Aloop=0

if A==0:
    print(0)
    exit()

p=A

i=1
while True:
    p=(p*A)%10
    if p==A:
        Aloop=i
        break
    i+=1
DBG(Aloop)

if Aloop==1:
    print(A)
    exit()

Bmod=B%Aloop

if Bmod==0:
    print((A**(Aloop))%10)
    exit()
q=Bmod

Bloop=0

j=1
while True:
    q=(q*Bmod)%Aloop
    if q==Bmod:
        Bloop=j
        break
    elif q==0:
        if C==1:
            print((A**Bmod)%10)
            exit()
        else:
            ans=(A**(Aloop))%10
            print(ans)
            exit()
    j+=1
DBG(Bloop)

Rui=C%Bloop
ans=Bmod**Rui

k=(A**(ans%Aloop))%10
    
print(k)

