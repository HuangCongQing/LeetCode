
""" 
// n k(任意重量) x(z最小差值)
// n个数量
"""
# 输入
# n, k, x = map(int, input().strip().split())
n, k, x = 8,2,3
# print(n, k, x)
# vector = list(map(int, input().strip().split()))
vector = [1,1,5,8,12,13,20,22]

vector.sort()  # 升序
# vector.reverse() # 降序
# print(vector) # 
count = 1
diff = []  # 下标
for i in range(len(vector)-1):
    if vector[i+1]-vector[i] > x:
        diff.append(vector[i+1]-vector[i]) # 每个堆的第一个下标
        count = count+1
diff.sort() # 升序
# k(任意重量)  x(z最小差值)
for i in range(len(diff)):
    if(diff[i]<=2*x):
        if(k>=1):
            k = k-1
            count-=1
    else:
        short = (diff[i] -1)&k 
        if(k>=short):
            k = k-short
            count-=1
    
    if(k<=0):
        break

print(count) # 输出2