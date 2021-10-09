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
    // 1 初始化
    int n,k,x;
    cin>>n>>k>>x;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    // 算法
    sort(vec.begin(), vec.end());
    

    return 0;
}


// 