#include <iostream>
using namespace std;
#include <algorithm>
#include <functional>

int N, M, A[200002];
int B[200002];


int main() {

    cin >> N >> M;
    for (int i = 1; i <= M; i++){
        cin >> A[i];
    } 
    /*
    for (int i = 1; i <= M; i++){
        cout << A[i] << endl;
    }
    */
    if(N==M){
        cout << "0" << endl;
        exit(0);
    }
    A[0]=0;
    A[M+1]=N+1;
    sort(A , A + M+2);
    for(int i=1;i<=M+1;i++){
        B[i]=A[i]-A[i-1]-1;
    }
    sort(B+1 , B + M+2);
    /*
    for(int i=1;i<=M+1;i++){
        cout << B[i] << endl;
    }
    */
    int minP=0;
    for(int i=1;i<=M+1;i++){
        if(B[i]>0){
            minP=B[i];
            break;
        }
    }
    int sum=0;
    for(int i=1;i<=M+1;i++){
        sum+=(B[i] + (minP-1)) / minP;
    }
    cout << sum << endl;
    return 0;
}