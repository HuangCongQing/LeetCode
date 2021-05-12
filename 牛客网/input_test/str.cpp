/*
 * @Description: 
 * @Author: HCQ
 * @Company(School): UCAS
 * @Email: 1756260160@qq.com
 * @Date: 2021-05-12 12:44:42
 * @LastEditTime: 2021-05-12 12:44:43
 * @FilePath: /LeetCode/牛客网/input_test/str.cpp
 */
#include<iostream>
#include<string>
#include<vector>
#include<algorithm> //sort,reverse

using namespace std;
int main()
{
    char ch;
    vector<string>res;
    string str;
    while(cin>>ch)  // 不能用cin>>ch
    {
        if(ch!='\n')
        {
            if(ch!=',')
                 str+=ch;
                //res.push_back(ch);
            
            else
            {
                res.push_back(str);
                str="";
            }
        }
        else
        {
            res.push_back(str);
            str="";
            sort(res.begin(),res.end());
            for(int i=0;i<res.size();i++)
            {
                if(i==res.size()-1)
                    cout<<res[i];
                else
                    cout<<res[i]<<',';
            }
            cout<<endl;
            res.clear();
        }   
    }
    return 0;
}