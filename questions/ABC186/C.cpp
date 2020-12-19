#include <iostream>
#include <sstream>
using namespace std;
#define int long long

int N;

bool OK_10(int n){
    bool flag = true;
    while(n>0){
        if(n%10==7){
            flag = false;
        }
        n /= 10;
    }
    return flag;
}

bool OK_8(int n) {
    // #include <sstream> // std::stringstream
    stringstream ss;
    ss << oct << n;
    std::string s = ss.str();  // "11"
    //cout << s << endl;
    bool flag = true;
    for (int i = 0;i<s.size();i++){
        if(s[i]=='7'){
            flag = false;
        }
    }

    return flag;
}

main() {
    cin >> N;

    //cout << N;
    int sum = 0;

    for (int i = 1; i <= N;i++){
        if(OK_10(i) & OK_8(i)){
            sum++;
        }
    }

    cout << sum;

    return 0;
}