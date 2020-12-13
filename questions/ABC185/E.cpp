
#include <iostream>
using namespace std;


int N, K, A[59];
string a, b;

int main() {
    #define int long long


    cin >> N >> K;
    for (int i = 1; i <= N; i++){
        cin >> A[i];
    } 
    for (int i = 1; i <= N; i++){
        cout << A[i] << endl;
    }

    // 例 1: 入力した 2 つの文字列を連結して、最初の 10 文字を出力します。

    cin >> a >> b;
    string c = a + b;
    if (c.size() <= 10) cout << c << endl;
    else cout << c.substr(0, 10) << endl;


    return 0;
}