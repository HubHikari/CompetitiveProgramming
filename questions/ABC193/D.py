from itertools import permutations

DEBUG_MODE = 0

MAX_NUM=2**63-1

def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)

def count(s):
    mylist=[]
    for i in range(1,10):
        now=s+str(i)
        mylist.append(count2(now))
    return mylist






def count2(s):
    mylist = [0]*10
    point=0
    #print(mylist)
    for j in range(0,5):
        mylist[int(s[j])]+=1
    #print(mylist)
    for i in range(1,10):
        point+=i*pow(10,mylist[i])
    #print(point)
    return point


            

#int型で受け取るとき
K = int(input())
S = input()
T = input()

cardlist = [K]*10

strT=S[0:4]
strA=T[0:4]
for i in range(0,4):
    cardlist[int(strT[i])]-=1
    cardlist[int(strA[i])]-=1

Tlist=[0]+count(strT)
Alist=[0]+count(strA)

DBG(Tlist)
DBG(Alist)

ans=0
for i in range(1,10):
    for j in range(1,10):
        if Tlist[i]>Alist[j]:
            DBG("win")
            if i!=j:
                ans+=(cardlist[i]/(9*K-8))*(cardlist[j]/(9*K-9))
            else:
                ans+=(cardlist[i]/(9*K-8))*((cardlist[j]-1)/(9*K-9))
print(ans)
