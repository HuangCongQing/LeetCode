#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    // 数据处理
    int N;
    cin>>N; 
    vector<int> nums, scale; //
    for(int i=0;i<N;i++){
        int n, s;
        cin>>n>>s;
        nums.push_back(n);
        scale.push_back(s);
    }
    int M;
    cin>>M;
    vector<int> needs;
    for(int i=0;i<M;i++){
        int need;
        cin>>need;
        needs.push_back(need);
    }
    // N<50, M<15;
    // 算法
    //nums(N)   2 3 4  内存块数量
    //scales() 4 8 16   Kbyte 
    // needs(M) 7 9 11 4
    //cout<<64; //5%  10
    cout<<-1;  //20%  40
    
    return 0;
}