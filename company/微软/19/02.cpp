
#include<string>
#include<unordered_set>
int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int sum = 0;
    for(auto ch:S){
        sum+=ch - '0';
    }
    unordered_set<string> myset;
    for(int i=0;i<S.size();i++){
        string s1 = S;
        int temp = sum - (S[i]-'0');
        temp = 3 - temp%3; // 得到 3 - 2  = 1
        if(temp==3) temp = 0;
        while(temp<=9){
            s1[i] = temp + '0';
            myset.insert(s1);
            temp+=3;
        }
    }
    // 得到结果
    return myset.size();
}
