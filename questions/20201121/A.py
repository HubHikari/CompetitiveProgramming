S,P = map(int, input().split())


for i in range(1,P+1):

    if P%i ==0:
        #print(str(i)+" "+str(P//i))
        if i+P//i == S:
            print("Yes")
            exit()
    if i*i>P:
        break

print("No")