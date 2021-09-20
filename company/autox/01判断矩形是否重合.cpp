
// leetcode836 判断矩形是否重合  YES 40% ，NO 60%
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
  // 初始化
  vector<vector<float>> vecs;
  for(int i=0;i<8;i++){
      vector<float> vec;
      float m,n;
      cin>>m>>n;
      vec.push_back(m);
      vec.push_back(n);
      vecs.push_back(vec);
  }
  // 处理y1,x1,y2, x2
    float y11 = min(vecs[0][1],min(vecs[1][1], min(vecs[2][1], vecs[3][1])));
    float x11 = min(vecs[0][0],min(vecs[1][0], min(vecs[2][0], vecs[3][0])));
    float y12 = max(vecs[0][1],max(vecs[1][1], max(vecs[2][1], vecs[3][1])));
    float x12 = max(vecs[0][0],max(vecs[1][0], max(vecs[2][0], vecs[3][0])));
    vector<float> box1{x11, y11,x12 ,y12};

    float y21 = min(vecs[4][1],min(vecs[5][1], min(vecs[6][1], vecs[7][1])));
    float x21 = min(vecs[4][0],min(vecs[5][0], min(vecs[6][0], vecs[7][0])));
    float y22 = max(vecs[4][1],max(vecs[5][1], max(vecs[6][1], vecs[7][1])));
    float x22 = max(vecs[4][0],max(vecs[5][0], max(vecs[6][0], vecs[7][0])));
    vector<float> box2{x21, y21,x22 ,y22};
    
    // 计算宽高
    // float in_h = min(box1[2], box2[2]) - max(box1[0], box2[0]);
    // float in_w = min(box1[3], box2[3]) - max(box1[1], box1[1]);
    // if(in_h<0 || in_w<0){
    //   cout<<"NO";
    // }else{
    //   cout<<"YES";
    // }
    if(!(box1[2] <=box2[0] || box1[3] <=box2[1] || box1[0] >=box2[2] || box1[1] >=box2[3])){
      cout<<"YES";
    }else{
      cout<<"NO";
    }
    return 0;
}
