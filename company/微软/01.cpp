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

int minDistance(string word1, string word2){
    // 初始化
    vector<vector<int> dp(word1.size()+1, vector<int>(word2.size)+1, 0)
    // base case
    for(int i=0;i<dp.size();i++){
        dp[i][0]=i;
    }
    for(int j=0;i<dp.size();i++){
        dp[0][j]=i;
    }
    // 
    for(int i=1;i<dp.size();i++){
        for(int j=1;j<dp[i].size();j++){
            if(word1[i-1]==word2[j-1]) dp[i][j] = dp[i-1][j-1] // 判断位置相等
            else{
                dp[i][j] = min(dp[i-1][j-1]+1, min(dp[i][j-1], dp[i-1][j])+1);
            }
        }
    }
    return dp[word1.size()][word2.size();]
}


int main()
{

    return 0;
}