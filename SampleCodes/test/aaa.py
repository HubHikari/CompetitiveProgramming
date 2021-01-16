#str型で受け取るとき
s = input() 
#int型で受け取るとき
s = int(input()) 
#float型　(小数)で受け取るとき
s = float(input())


#list型で受け取るとき
s = input().split()
print(s)
print(s[0])
print(s[0][0])


#文字列として受け取るとき
A, B, C = input().split()
print(A)    
print(A,B,C)


#入力変数が整数の場合
A, B = map(int, input().split())
print(A)
print(A,B)


#入力変数の数がN個の場合
l = list(map(int, input().split()))
print(l)


#文字列と数字の複合
N, S = map(str, input().split())


#(N,1)行列データ
N, M = map(int, input().split())
A = []
for _ in range(M):
    A.append(int(input())
print(A)


#(N,M)行列データ
N = int(input())
x = list(map(int, input().split()))
y = list(map(int, input().split()))
print(x)


#列に変数が並ぶとき
N = int(input())
xy = [map(int, input().split()) for _ in range(N)]
x, y = [list(i) for i in zip(*xy)]
print(x)
print(x[1]+y[1])