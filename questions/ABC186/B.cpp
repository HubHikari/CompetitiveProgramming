#include <iostream>
using namespace std;
#define int long long

int H, W, A[102][102], C[102];

main() {
    cin >> H >> W;

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W;j++){
             cin >> A[i][j];
        }
    }


    /*
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cout << A[i][j] <<" ";
        }
        cout << endl;
    }
    */
    int minB=999;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            minB = min(A[i][j], minB);
        }
        //cout << endl;
    }
    int sum = 0;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            sum += (A[i][j] - minB);
        }
        // cout << endl;
    }
    cout << sum;

    return 0;
}