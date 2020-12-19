#include <iostream>
using namespace std;
#define int long long

int N, M, A[102][102],B[102];

main() {

    for (int i = 1; i <= 102; i++){
        
        B[i]=0;
        
    } 
    cin >> N >> M;
    for (int i = 1; i <= N; i++){
        for(int j=1;j<=M;j++){
            cin >> A[i][j];
        }
    } 
    /*
    for (int i = 1; i <= N; i++){
        for(int j=1;j<=M;j++){
         cout << A[i][j];
        }
    } 
    */

    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++){
            B[i]+=A[j][i];
        }
    }

    int maxN=0;
    for(int i=0;i<M;i++){
        for(int j=i+1;j<M;j++){
            maxN=max(maxN,B[i]+B[j]);
        }
    }
   



    for (int i = 1; i <= M; i++){
        cout << maxN << endl;
    }



    return 0;
}