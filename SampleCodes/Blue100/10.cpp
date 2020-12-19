#include <iostream>
using namespace std;
#define int long long

int N, q, A[202],m[202];
string a, b;

bool flag[202];

main() {

    for (int i = 1; i < 202; i++) {
        flag[i]=false;
    }

    cin >> N ;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    cin >> q ;

    for (int i = 1; i <= q; i++) {
        cin >> m[i];
    }

    /*
    cout << q << endl;

    for (int i = 1; i <= q; i++) {
        cout << m[i];
    } 
    */

    for (int i = 0; i < (1 << N); i++) {
        int bit[202], sum = 0;
        for (int j = 0; j < N; j++) {
            int Div = (1 << j);
            bit[j] = (i / Div) % 2;
        }
        for (int j = 0; j < N; j++) {
            sum += A[j] * bit[j];
        }
        for(int i=1;i<=q;i++){
            if (sum == m[i]) flag[i] = true;
        }
        
    }

    for(int i=1;i<=q;i++){
        if (flag[i] == true){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    


    return 0;
}

/*
#include <iostream>
using namespace std;

int N, X, A[22];
bool flag = false;

int main() {
    cin >> N >> X;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 0; i < (1 << N); i++) {
        int bit[30], sum = 0;
        for (int j = 0; j < N; j++) {
            int Div = (1 << j);
            bit[j] = (i / Div) % 2;
        }
        for (int j = 0; j < N; j++) sum += A[j] * bit[j];
        if (sum == X) flag = true;
    }
    if (flag == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}



*/