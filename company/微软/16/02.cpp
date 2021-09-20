
string s;
int sum=0;
for(int i=0;i<s.size();i++){
    sum+= s[i]-'0';
}
int res; // 返回值
unordered_set<int> myset;


for(int i=0;i<s.size();i++){
    int temp;
    temp = sum-(s[i]-'0') //6-1 = 5
    temp = 3-temp%3; // 3-2=1
    while(temp<=9){
        string s1 = s;
        s1[i] = temp;  //修改s1
        temp +=3;
        if(myset.count(s1)!=0){
            continue;
        }else{
            my.insert(s1);
            res++;
        }
    }
}
