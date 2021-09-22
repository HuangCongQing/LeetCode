
/*
 * @Description: 各种输入总结
 * @Author: HCQ
 * @Company(School): UCAS
 * @Email: 1756260160@qq.com
 * @Date: 2021-05-11 20:52:32
 * @LastEditTime: 2021-05-11 20:52:40
 * @FilePath: /LeetCode/牛客网/input_details.cpp
 */
a=int(input())
for i in range(a):
    temp=list(map(int,input().strip().split()))
    print(sum(temp[1:]))