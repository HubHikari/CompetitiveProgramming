N = int(input())
s = input()

i=0
while i < N-2:
    #print(s[i:i+3])
    if s[i:i+3] == 'fox':
        #print("1")
        s=s[:i]+s[i+3:]
        #print(s)
        i=i-3


    
    i=i+1
    if i<0:
        i=0
    #print(i)


#print(N)
#print(s)
print(len(s))