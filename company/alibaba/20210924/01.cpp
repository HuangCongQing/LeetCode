
#include <iostream>
#include<climits> // INT_MIN    INT_MAX
#include <string>
#include <vector> // 初始化：vector<int> v = {1,2,3,4,5};    vector<int> v(n, 0)
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
    int n;
    cin>>n;
    string s;
    cin>>s;  // "RRRR" "RBBBRRR"
    int ans1=1,ans2=1;
    // ans1
    int numR =0,numB = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='R') numR++; //R数量
        if(s[i]=='B') numB++; // B 数量
    }
    if(numR==0 || numB==0){
        cout<<1;
    }
    else{
        // ans1
        if(numR >numB){
            ans1 += numB;
        }else{
            ans1 += numR;
        }
        // ans2
        int ans2=1;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]) ans2++;
        }
        
        int result = ans1>=ans2 ? ans2:ans1;
        // cout<< ans1; // 15%
        // cout<< ans2;  // 10%
        cout<< result;
    }
    return 0;
}