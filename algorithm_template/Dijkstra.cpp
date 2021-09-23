/*
 * @Description: 迪杰斯特拉算法(Dijkstra)
 * @Author: HCQ
 * @Company(School): UCAS
 * @Email: 1756260160@qq.com
 * @Date: 2021-09-12 14:44:42
 * @LastEditTime: 2021-09-12 14:44:42
 * @FilePath: /LeetCode/algorithm_template/Dijkstra.cpp
 */

#include <iostream>
#include<climits> // INT_MIN    INT_MAX
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


#define MAXVALUE 0x3f3f3f3f

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // 建图 -邻接矩阵
        vector<vector<pair<int, int>>> adj; 
        adj.resize(n + 1);
        for (auto& edg : times) {
            adj[edg[0]].push_back({edg[1], edg[2]});//源节点->(目标节点，权重)
        }
        // k到当前访问节点的总权重 （记录下结点是否访问）
        vector<int> ans(n + 1, MAXVALUE);

        // 优先队列中存放 [收到信号时间，结点]
        // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> s;
        // s.push(pair(0, k));  // 权重，起点
        auto cmp = [](pair<int, int>& a, pair<int, int>& b) {return a.second > b.second;};// 从大到小
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> q(cmp);
        q.push(pair(k, 0));  // 初始值(起点， 总权重}


        while (!q.empty()) {
            auto cur = q.top(); // 取最大的
            q.pop();  // 
            if (ans[cur.first] != MAXVALUE) continue;  // 当前访问节点
            ans[cur.first] = cur.second;  // r[起点到当前访问节点] =  k到当前访问节点的总权重
            
            // 更新ans======================cur.first是下标================================================
            if(ans[cur.first] < cur.second) ans[cur.first] = cur.second;  // r[起点到当前访问节点curr] =  k到当前访问节点的总权重
            else{
                continue;
            }

            for (auto& edg : adj[cur.first]) {// 针对一个起点k
                    q.push(pair(edg.first, edg.second + cur.second)); // 将当前节点和其他的邻接矩阵，都wight权重相加。后面优先队列会自动排序
            }
        }

        int minT = -1;
        for (int i = 1; i <= n; ++i)
            minT = max(minT, ans[i]);
        return minT == MAXVALUE ? -1 : minT;
    }
};

// 作者：meteordream
// 链接：https://leetcode-cn.com/problems/network-delay-time/solution/wang-luo-yan-chi-shi-jian-dan-yuan-zui-d-m1m3/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。