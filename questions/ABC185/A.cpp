#include <iostream>
using namespace std;


int A[4];
string a, b;

int main() {


    
    cin >> A[0] >> A[1] >> A[2] >> A[3] ;
    
    /*
    for (int i = 0; i < 4; i++){
        cout << A[i] << endl;
    }
    */

    int minQ=100;

    for (int i = 0; i < 4; i++){
        minQ=min(minQ,A[i]);
    }

    cout << minQ << endl;

    return 0;
}

