N = int(input())

AA = input()
AB = input()
BA = input()
BB = input()

flag=0
sum=0
a=1
if AA=='A' and AB=='B' and BA=='B' and AA=='A':
    flag=1
if AA=='B' and AB=='A' and BA=='A' and AA=='B':
    flag=1

if N==1 or N==2:
    print(a)
    exit()
 

if flag==1:
    a1=0
    a2=1
    for i in range(0,N-2):
        sum=a1+a2
        a1=a2
        a2=sum

    print(sum%(1000000000+7))
else:
    print(a)

