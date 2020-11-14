import numpy as np

def deleteLine(k):
    for j in range(0,arraysize):
        Array[j][k]=0

arraysize = int(input())
mylist = []
for i in range(0, arraysize):
  val = input()
  if val:
    mylist.append(val)

# 入力した結果を表示
if mylist:
    for item in mylist:
        print(item)

Array = np.zeros((arraysize, arraysize), dtype=np.int)
print(Array)

i=0
for item in mylist:
    for j in range(0,arraysize):
        Array[i][j] = int(item[j])
    i=i+1 

print(Array)
Array2=Array
print(np.dot(Array, Array2))
for k in range(0,2):
    Array = np.dot(Array, Array2)
    print(Array)
#deleteLine(2)
#print(Array)
'''
for k in range(0,arraysize):
    deleteLine(k)
'''


