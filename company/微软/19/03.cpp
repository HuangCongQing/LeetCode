
// leetcode 768

#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
#include <numeric>  
#include<climits> // INT_MIN    INT_MAX
/* 
方法1
 */
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size(), m = INT_MIN;
    int res = 0;
    vector<int> mins(n+1, INT_MAX);
    for(int i=n-1;i>=0;--i){
        mins[i] = min(A[i], mins[i+1]);
    }
    for(int i=0;i<n;i++){
        m = max(m, A[i]);
        if(m<=mins[i+1]) res++;
    }
    return res;
}


/* 
方法2 ： 栈
 */
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
}
