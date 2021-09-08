#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string
    int N, M;
    // 每组第一行是2个整数，N和M，至于为啥用while，因为是多组。
    while(cin>> N >> M) {
      cout << N << " " << M << endl;
      // 循环读取“接下来的M行”
      for (int i=0; i<M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << a << " " << b << " " << c << endl;
      }
    }
    return 0;
}