#include <iostream>
using namespace std;
#include <algorithm>
#include <functional>
#define ll long long
ll N, A[200002];
ll B[200002];
ll C[200002];

int main() {

    cin >> N ;
    for (int i = 1; i <= N; i++){
        cin >> A[i];
    }

    sort(A + 1, A + N+1);

    

    

    B[0] = 0;
    for (int i = 1; i <= N; ++i) {
        B[i] = B[i-1] + A[i];
    }

    

    

    for (int i = N; i >= 1;i--){
        C[i] = A[i] * (i-1) - B[i-1];
    }
    /*
    for (int i = 1; i <= N; i++) {
        cout << "A:" << A[i] << endl;
    }
    for (int i = 1; i <= N; i++) {
        cout << "B:" << B[i] << endl;
    }
    for (int i = 1; i <= N; i++) {
        cout << "C:" << C[i] << endl;
    }
    */
    
    long long sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += C[i];
    }
    cout << sum;
    return 0;
}