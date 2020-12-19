#include <iostream>
#include <vector>
using namespace std;
#define int long long

int H, W, M;


main() {
    cin >> H >> W >>M;

    vector<int> X;
    vector<int> Y;
    //vector <vector<int>> G;
    vector<vector<int>> G(H+1, vector<int>(W+1));
    X.push_back(0);
    Y.push_back(0);
    for (int i = 1; i <= M; i++) {
        int inX,inY;
        cin >> inX >> inY;
        X.push_back(inX);
        Y.push_back(inY);
        
    }

    cout << H << " " << W << endl;
    for (int i = 1; i <= M; i++) {
        cout << X[i] << " " << Y[i] << endl;
    }

    for (int i = 0; i <= H;i++){
        for (int j = 0; j <= W;j++){
            G.at(i).at(j)=0;
        } 
    }
    
    for (int i = 1; i <= M;i++){
        G[Y[i]][X[i]] = 2;
    }

    G[1][1] = 1;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cout << G[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if(G[i][j]==1){
                for (int k = i; k <= W;k++){
                    if (G[i][k]==2){
                        break;
                    } 
                    G[i][k] = 3;
                }
                for (int k = i; k >= 1; k--) {
                    if (G[i][k] == 2) {
                        break;
                    }
                    G[i][k] = 3;
                }
                for (int m = j; m <= H; m++) {
                    if (G[m][j] == 2) {
                        break;
                    }
                    G[m][j] = 3;
                }
                for (int m = j; m >= 1; m--) {
                    if (G[m][j] == 2) {
                        break;
                    }
                    G[m][j] = 3;
                }
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (G[i][j] == 3) {
                for (int k = i; k <= W; k++) {
                    if (G[i][k] == 2) {
                        break;
                    } else if (G[i][k] == 3){
                        continue;
                    }
                    G[i][k] = 4;
                }
                for (int k = i; k >= 1; k--) {
                    if (G[i][k] == 2) {
                        break;
                    } else if (G[i][k] == 3) {
                        continue;
                    }
                    G[i][k] = 4;
                }
                for (int m = j; m <= H; m++) {
                    if (G[m][j] == 2) {
                        break;
                    } else if (G[m][j] == 3) {
                        continue;
                    }
                    G[m][j] = 4;
                }
                for (int m = j; m >= 1; m--) {
                    if (G[m][j] == 2) {
                        break;
                    } else if (G[m][j] == 3) {
                        continue;
                    }
                    G[m][j] = 4;
                }
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cout << G[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}