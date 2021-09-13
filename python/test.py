
# 字符串排序
# https://www.cnblogs.com/imhuanxi/p/11349182.html
s="abxc"
l1=list(s)     #['a', 'b', 'x', 'c']
l1.sort()      #['a', 'b', 'c', 'x']
s1="".join(l1) #'abcx'
print(s1) # abcx