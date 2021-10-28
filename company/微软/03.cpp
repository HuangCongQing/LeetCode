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

using namespace std;




int main()
{
    vector<int> vec = {0,2,5,7,0};
    int k=7;
    // 连续子序列之和等于K
    // out={0,2,5}  {2.5} {7,0}
    vector<vector<int> res;
    int i=1,j=2;
    int sum = 3;
    target = k;
    while(i<=target/2){
        if(sum==target){
            vector<int> ans(j-i+1);
            int k = i;
            if(int m=0;m<j-i+1;m++){
                ans[m] = k;
                k++;
            }
            res.push_back(ans);
            sum-=i;
            i++;
            j++;
            sum+=j;

        }else if(sum<target){
            j++;
            sum+=j;
        }else{
            sum-=i;
            i++;
        }

    }

    return res;
}