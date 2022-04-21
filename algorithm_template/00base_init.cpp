/*
 * @Description: 各种数据结构初始化
 * @Author: HCQ
 * @Company(School): UCAS
 * @Email: 1756260160@qq.com
 * @Date: 2022-04-21 17:34:21
 * @LastEditTime: 2022-04-21 18:12:03
 * @FilePath: \LeetCode\algorithm_template\00base_init.cpp
 */


#include <iostream>
#include<climits> // INT_MIN    INT_MAX
#include <string>
#include <vector> // 初始化：vector<int> v = {1,2,3,4,5};    vector<int> v(s.size(), 0)
#include <algorithm> //sort,reverse
#include <queue>  //队列 BFS
// #include <pair>
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
    // 字符串、
    string str;
    string sub = str.substr(start, end); // 子字符串获取
    // 数组
    vector<int> v{1,2,3,4,5};
    vector<int> v(v1.size(), 1);
    // 二维数组
    vector<vector<int, int>> v;
    // 栈 stack
    stack<int> mystack;
    mystack.empty();
    mystack.size();
    mystack.top(); // 
    mystack.push();
    mystack.pop(); // 移除
    // 队列
    queue<int> q;
    q.empty();
    q.size();
    q.push();
    q.pop();
    q.front();
    // 
    for(auto v:vec){
        
    }


}