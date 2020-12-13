#include <iostream>
using namespace std;


int N, M, T; 
int A[1002],B[1002];
bool flag=false;

int main() {


    cin >> N >> M >> T;
    int Max=N;
    B[0]=0;
    A[M+1]=T;
    for (int i = 1; i <= M; i++){
        cin >> A[i] >>B[i];
    } 
    /*
    for (int i = 1; i <= M; i++){
        cout << A[i] <<" "<< B[i] <<endl;
    }
    */


    for(int i=1;i<=M;i++){
        N -= A[i]-B[i-1];
        if(N<=0){
            flag=true;            
        }
        //cout << N <<endl;
        N+=B[i]-A[i];
        if(N>=Max){
            N=Max;
        }
        //cout << N <<endl;
    }
    N-=A[M+1]-B[M];
    //cout << N <<endl;

    if(N<=0){
        flag=true;            
    }

    if(flag==true){
        cout << "No" <<endl;
    }else{
        cout << "Yes" <<endl;
    }




    return 0;
}