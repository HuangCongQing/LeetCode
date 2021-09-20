/*
 * @Description: 
 * @Author: HCQ
 * @Company(School): UCAS
 * @Email: 1756260160@qq.com
 * @Date: 2021-05-12 11:21:45
 * @LastEditTime: 2021-05-12 12:44:10
 * @FilePath: /LeetCode/test.cpp
 */
#include <iostream>
#include <string>
#include <vector> // 初始化：vector<int> v = {1,2,3,4,5};    vector<int> v(s.size(), 0)
#include <algorithm> //sort,reverse
#include <queue>  //队列 BFS
#include <pair>
#include <cmath>
#include <numeric>  // 求和
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>  // a.count("eeee") c.insert("dddd") 

// 排序：sort(vec.begin(),vec.end())
// 求和：double sumValue = accumulate(begin(vec), end(vec), 0.0);   // accumulate函数就是求vector和的函数；

using namespace std;

int main()
{

    // // 输入
    // string str;
    // // cin>>str;
    // str = "wer werf";
    // cout<<"str.size():"<<str.size()<<endl;
    // cout<<"str.length(): "<<str.length()<<endl;
    // for (int i = 0; i < str.size(); i++)
    // {
    //     cout << str[i];
    // }

    // string s;
    // getline(cin,s);
    // cout<<s;
    // while (cin >> s)
    // {
    //     // 处理s
    //     cout<<s;   // 空格消失！！！
    // }

    // 单个字符循环
    char ch;
     while(cin.get(ch))
     cout<<ch;

    return 0;
}


// 