/*
 * @Description: BFS（广度优秀搜索模板）
 * @Author: HCQ
 * @Company(School): UCAS
 * @Email: 1756260160@qq.com
 * @Date: 2021-09-12 14:38:51
 * @LastEditTime: 2021-09-12 15:24:31
 * @FilePath: /LeetCode/algorithm_template/02bfs.cpp
 */
#include <iostream>
#include <string>
#include <vector>  // vector
#include <queue>  // 队列   queue<int> q;
#include <stack> // 栈  stack<int> stack;
#include <map> //    unordered_map
#include <algorithm> //sort,reverse

using namespace std;


//（C++模板）
int BFS(string start, string  target ){ // 输入起点和终点(可能是TreeNode/string/int) 本模板以string举例
    // 初始化：两行visited 两行q 一行step
    unordered_set<string> visited;
    // if(visit.count("0000")) return -1;// 同时判断初始情况下，目标在死亡数字里面
    visited.insert(start);   // 初始化已访问，  visit.insert(deadends.begin(), deadends.end());
    queue<string> q;
    q.push(start);  //// 将起点加入队列
    int step = 0; // 记录扩散的步数
    while(!q.empty()){
        /* 1 将当前队列中的所有节点向四周扩散 */
        for(int i;i<q.size();i++){
            /* 1.1 取出当前队列节点 */
            string curr = q.front();
            q.pop();
            /* 1.2 划重点：这里判断是否到达终点 */
            if(curr==target) return step;
            /* 1.3 将 curr 的相邻节点加入队列(处理curr的下一结果放在队列中) */
            // 二叉树的情况用不到for循环，其他有可能用到(几种状态循环几次)
            for(string newOne: curr.adj()){
                // 处理处理curr的下一结果放在队列中
                //  ...处理...
                /* 若哈希表中找不到此状态，则加入哈希集visit同时入队 */
                if(!visited.count(newOne)){
                    q.push(newOne);  // 加入队列
                    visited.insert(newOne);  // 加入visited
                }
            }
        }
        /* 2  划重点：更新步数在这里 */
        step++;
    }  // while循环结束
    return -1;
}

