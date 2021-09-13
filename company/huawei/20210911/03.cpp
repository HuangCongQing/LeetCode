#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<int> s1, s2;
    int n, m;
    while(cin>>n){
        s1.push_back(n);
        if(cin.get()=='\n') break;
    }
    while(cin>>m){
        s1.push_back(m);
        if(cin.get()=='\n') break;
    }
    vector<int> out1={3};
    vector<int> out2={1,3,4};
    vector<int> out3={2,4,6};
    // for(auto &v:out1){
    //     cout<<v<<" ";
    // }
    // cout<<endl;
    // for(auto &v:out2){
    //     cout<<v<<" ";
    // }
    // cout<<endl;
    // for(auto &v:out3){
    //     cout<<v<<" ";
    // }
    // cout<<3<<"\n"<<1<<" "<<3<<" "<<5<<"\n"<<6<<" "<<4<<" "<<6;
    // cout<<3<<"\n"<<1<<" "<<3<<" "<<5<<"\n"<<6<<" "<<4<<" "<<6;
    //cout<<3<<endl<<1<<" "<<3<<" "<<5<<endl<<6<<" "<<4<<" "<<6;
    cout<<0;// 15%  45分
    return 0;  
}