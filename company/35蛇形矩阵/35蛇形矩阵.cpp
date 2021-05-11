/*
 * @Description: https://www.nowcoder.com/practice/649b210ef44446e3b1cd1be6fa4cab5e?tpId=37&rp=1&ru=%2Fta%2Fhuawei&qru=%2Fta%2Fhuawei%2Fquestion-ranking&tab=answerKey
 * @Author: HCQ
 * @Company(School): UCAS
 * @Email: 1756260160@qq.com
 * @Date: 2021-05-11 20:28:56
 * @LastEditTime: 2021-05-11 20:29:53
 * @FilePath: /LeetCode/company/35蛇形矩阵/35蛇形矩阵.cpp
 */
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n;
    while (cin>>n)
    {
        int beg=1;
        for(int i=1;i<=n;i++)
        {
            cout<<beg;
            int tmp = beg;
            for(int j=i+1;j<=n;j++)
            {
                tmp+=j;
                cout<<" "<<tmp;              
            }
            cout<<endl;
            beg+=i;
        }
    }
    return 0;
}