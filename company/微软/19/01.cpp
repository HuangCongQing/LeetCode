// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<vector>
string solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> low(26, 0);
    vector<int> high(26, 0);
    for(auto ch:S){
        if(ch-'a' <0){
            high[ch-'A']++;
        }
        else{
            low[ch-'a']++;
        }
    }
    string req = "NO";
    for(int i=0;i<26;i++){
        if(low[i] > 0 && high[i]>0) req = 'A'+i;
    }
    return req;
}
