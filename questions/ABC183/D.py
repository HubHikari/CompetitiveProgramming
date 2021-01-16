import sys
N, W = map(int, input().split())

lis = []

for i in range(N):

    S, T, P = map(int, input().split())
    lis.append((S, P))
    lis.append((T, -1*P))

lis.sort()
print(lis)
now = 0

for x, y in lis:
    now += y
    if now > W:
        print("No")
        sys.exit()

print("Yes")

'''

from operator import itemgetter

#列に変数が並ぶとき
N, W = map(int, input().split())
xy = [map(int, input().split()) for _ in range(N)]
S, T,P= [list(i) for i in zip(*xy)]

event=[]

for i in range(0, N):
    event.append([S[i], P[i]])
    event.append([T[i], -P[i]])

event.sort()

#print(event)

water = 0
j=0
while j<len(event):
    water = water + event[j][1]
    
    if j < len(event)-1:
        if event[j][0] == event[j + 1][0]:
            j = j + 1
            continue
    #print(water)
    j = j + 1

    if water > W:
        print("No")
        exit()
    
    

print("Yes")
        
    
'''
