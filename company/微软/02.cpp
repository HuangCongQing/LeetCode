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
    string str = '重庆你好好的';
    vector vecOri={"重庆", "你"};
    vector vecNeed;
    // Algori
    for(auto &needle:vecOri )
    for(int i=0;i<vecOri.size();vecOri.size()){    
        string needle = vecOri[i];
        // int len1 = str.size(),len2 = needle.size();
        // int head=0,tail = len2-1;

        // while(tail<len1){
        //     if(str.sub(head, len2)==needle) vecNeed.push_back(needle);
        //     head++;
        //     tail++;
        // }

        // Alg2
        int i=0,j=0;
        while(str[i]!='\n'&&needle[j]!='\n'){
            if(needle[j]=str[i]){
                i++;
                j++
            }else{ // 不相等退回开始位置
                i = i-j+1;
                j=0;
            }
        }
        if(j==needle.size()) vecNeed.push_back(needle);
    }

    return 0;
}