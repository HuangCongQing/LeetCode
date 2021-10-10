/* 
浮点数开平方根，精确到10-n
 */


// # arr2 中的元素各不相同
// # arr2 中的每个元素都出现在 arr1 中
// # 对 arr1 中的元素进行排序，使 arr1 中项的相对顺序和 arr2 中的相对顺序相同。未在 arr2 中出现过的元素需要按照升序放在 arr1 的末尾。


// # 输入：arr1 = [2,3,4,3,2,1], arr2 = [3,2]
// # 输出：[3,3,2,2,1,4]


vector<int> arr1;
vector<int> arr2;

unordered_map<int, int> mp1;
unordered_map<int, int> mp2;

for(auto x: arr2){
    mp2[x]++;
}
for(auto x: arr1){
    mp1[x]++;
}
// 前半部分
vector<int> res
for(auto x: arr2){
    int times = mp1[x];
    for(int i=0;i<times;i++)
        res.push_back(x);
}
// 后半部分
vector<int> res2;
for(auto x:arr1){
    if(mp2.count(x)==mp2.end()){
        res2.push_back(x);
    }
}
sort(res2.begin(), res2.end());

// 合并

vector<int> res3;
for(auto x:res){
    res3.push_back(x);
}
for(auto x: res2){
    res3.push_back(x);
}
return res3;