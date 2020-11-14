N = int(input())
S = list(input())
T = list(input())

sumS=0
sumN=0

for i in range(0,N):
    if S[i]=="1":
        sumS = sumS+1
    if T[i]=="1":
        sumN = sumN + 1

#print(sumS)
#print(sumN)

if sumS % 2 != sumN % 2:
    print("-1")
    exit()

for i in reversed(range(1, N)):
    if S[i]=='0' and T[i]=='1':
        print("-1")
        exit()
    elif S[i]=='1' and T[i]=='0':
        #print("OK")
        break

sum=0

for i in reversed(range(0, N)):
   for j in reversed(range(0, N)): 
       if S[i]=='1' and T[j]=='1':
           S[i]='0'
           T[j]='0'
           #print("Hit")
           sum=sum+(i-j)
flag=0
memo=0
for i in range(0, N):
    if S[i]=='1':
        if flag==0:
            flag=1
            memo=i
        elif flag==1:
            memo=0
            flag=0
            sum=sum+(i-memo)
            #print("Hit2")
        S[i]='0'
print(sum)
'''
for i in reversed(range(1, N)):
    if S[i]!=T[i]:
        if T[i]=='1':
            print("Impossible")
        S[i]='0'
        if S[i-1]=='0':
            S[i-1]='1'
            sum =sum +1
        elif S[i-1]=='1':
            S[i-1]='0' 
            sum=sum+1   
    print(S)
    print(T)   
print(sum) 
'''