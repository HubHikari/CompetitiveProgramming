A, B, C = map(int, input().split())

while A>=998244353:
    A=A-998244353

while B>=998244353:
    B=B-998244353

while C>=998244353:
    C=C-998244353

sum=0

sum=(A*B*C*(A+1)*(B+1)*(C+1)//8)%998244353



print(sum)