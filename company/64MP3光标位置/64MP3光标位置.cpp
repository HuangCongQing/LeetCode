/*
 * @Description: https://www.nowcoder.com/practice/eaf5b886bd6645dd9cfb5406f3753e15?tpId=37&rp=1&ru=%2Fta%2Fhuawei&qru=%2Fta%2Fhuawei%2Fquestion-ranking&tab=answerKey
 * @Author: HCQ
 * @Company(School): UCAS
 * @Email: 1756260160@qq.com
 * @Date: 2021-05-11 21:32:58
 * @LastEditTime: 2021-05-11 21:41:04
 * @FilePath: /LeetCode/company/64MP3光标位置/64MP3光标位置.cpp
 */
/* 

输入描述:
输入说明：
1 输入歌曲数量
2 输入命令 U或者D

本题含有多组输入数据！


输出描述:
输出说明
1 输出当前列表
2 输出当前选中歌曲

示例1
输入
复制
10
UUUU
输出
复制
7 8 9 10
7
 */
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string order;
    while(cin>>n>>order)
    {
        int num=1, first=1; //将n首歌曲编号1：n , num为光标当前所在歌曲的编号,first为当前屏幕显示页的第一首歌曲的编号
        if(n<=4) //歌曲总数不超过4时，所有歌曲一页即可显示完，不需翻页，first始终不变
        {
            for(int i=0;i<order.size();i++)
            {
                if( num==1 && order[i]=='U' ) num=n;   // 双重判断！！！！！！
                else if( num==n && order[i]=='D' ) num=1;
                else if(order[i]=='U') num--;
                else  num++; 
            }
            for(int i=1;i<=n-1;i++) 
                cout<<i<<' ';
            cout<<n<<endl;   // 输出当前歌曲
            cout<<num<<endl;// 输出选中歌曲
        }
        else  //歌曲总数大于4时，显示完全所有歌曲需要翻页，屏幕总是显示4首歌曲
        {
            for(int i=0;i<order.size();i++)
            {
                if( first==1 && num==1 && order[i]=='U' ) {first=n-3;num=n;} //特殊翻页1
                else if( first==n-3 && num==n && order[i]=='D' ) {first=1;num=1;} //特殊翻页2
                else if( first!=1 && num==first && order[i]=='U' ) {first--;num--;} //一般翻页1
                else if( first!=n-3 && num==first+3 && order[i]=='D' ) {first++;num++;} //一般翻页2
                else if( order[i]=='U' ) num--; //其他情况1
                else num++; //其他情况2
            }
            for(int i=first;i<first+3;i++)
                cout<<i<<' ';
            cout<<first+3<<endl;
            cout<<num<<endl;
        }
    }
    return 0;
}
