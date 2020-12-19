#include <iostream>
#include <vector>
using namespace std;
#define int long long

int T;

int exec(int N, int S, int K) 
{
    vector<int> backet;
    backet.resize(N+1);
    for (int i = 0;;i++) {
        int ama = (S + i * K) % N;
        backet[ama]++;
        if (ama == 0) {
            return i;
        } else if (backet[ama]>=1) {
            return -1;
        }
    }
}

main() {
    cin >> T;

    vector<int> N;
    vector<int> S;
    vector<int> K;

    for (int i = 0; i < T; i++) {
        
        int inN, inS, inK;
        cin >> inN>>inS>>inK;

        N.push_back(inN);
        S.push_back(inS);
        K.push_back(inK);
    }

    for (int i = 0; i < T; i++) {
        cout<<exec(N[i], S[i], K[i])<<endl;

    }

    return 0;
}