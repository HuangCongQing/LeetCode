
// 判断矩形是否重合  YES 40% ，NO 60%
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>  //队列
#include <pair>
using namespace std;

int[] row = [0, -1, 1, 0, -1, -1, 1, 1];
int[] col = [-1, 0, 0, 1, -1, 1, -1, 1];

void BFS(vector<vector<int>> &map, vector<vector<bool> &visited, queue<pair<int>> &que){
    while(!que.empty()){
        int n = que.size();
        while(n--){
            pair<int, int> p = que.front();
            que.top();
            if(p.first<0 or p.first>=map.size() or p.second<0 or p.second>=map[0].size() or visited[p.first][p.second]) continue;
            visited[p.first][p.second] = true;
            for(int i=0;i<8;i++){
                int x = p.first + row[i];
                int y = p.second + col[i];
                if(map[x][y]==1) que.push({x,y});
            }
        }
    }
}

int main(){
  // 初始化
    int N, M;
    cin>>N>>M;
    vector<vector<bool>>  inq(N, vector<bool>(M, false));
    vector<vector<int>>   vecs(N, vector<int>(M, 0));
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int w;
            cin>>w;
            vecs[i][j] = w;
      }
    }
//   算法BFS

    queue<pair<int，int>> que;
    int ans = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(vecs[i][j]==1 && inq[i][j]==false){
                ans++;
                que.push({i,j});
                BFS(vecs, inq, que);
            }
        }
    }

    cout<<ans;
    return 0;
  
}
