from itertools import permutations

DEBUG_MODE = 1


def DBG(s):
    if DEBUG_MODE == 1:
        print("DEBUG: ")
        print(s)


#str型で受け取るとき
s = input()
#int型で受け取るとき
s = int(input())
#float型　(小数)で受け取るとき
s = float(input())


#list型で受け取るとき
s = ["", ] + input().split()
print(s)
print(s[1])
print(s[1][0])


#文字列として受け取るとき
A, B, C = input().split()
print(A)
print(A, B, C)


#入力変数が整数の場合
A, B = map(int, input().split())
print(A)
print(A, B)


#入力変数の数がN個の場合
l = [0, ] + list(map(int, input().split()))
print(l)


#文字列と数字の複合
N, S = map(str, input().split())


#(N,1)行列データ
A = [0, ] + list(map(int, input().split()))
print(A)


#(N,M)行列データ
N = int(input())
d = [[0] * (N + 1)] + [[0, ] + list(map(int, input().split(" ")))
                       for i in range(N)]
print(d)
print(d[1][1])


#列に変数が並ぶとき
N, M = map(int, input().split())
xy = [map(int, input().split()) for _ in range(N)]
x, y = [list(i) for i in zip(*xy)]
x = [0, ] + x
y = [0, ] + y
print(x)
print(x[1]+y[1])
