""" /* 
浮点数开平方根，精确到10-n
 */ """
# import math-
def mySqrt(value, n):
    left = 0
    right = value if value >1 else 1 # 是否小于1
    mid = left + (right -left)/2
    # precision = 0.0001
    precision = 10**(-n)
    while mid * mid > value + precision or mid*mid < value - precision:
        if mid*mid > value + precision: # 大于目标值
            right = mid
        elif mid * mid < value - precision:
            left = mid
        mid = left + (right - left)/2
    return mid

print(mySqrt(2, 6))
print(10)

# arr2 中的元素各不相同
# arr2 中的每个元素都出现在 arr1 中
# 对 arr1 中的元素进行排序，使 arr1 中项的相对顺序和 arr2 中的相对顺序相同。未在 arr2 中出现过的元素需要按照升序放在 arr1 的末尾。


# 输入：arr1 = [2,3,4,3,2,1], arr2 = [3,2]
# 输出：[3,3,2,2,1,4]
