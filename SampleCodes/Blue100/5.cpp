#include <math.h>

#include <iostream>
using namespace std;
//#define int long long

int A, B, C, X, Y;

main() {
    cin >> A >> B >> C >> X >> Y;
    int maxP = max(X, Y);
    int minCost = 2147483647;
    for (int i = 0; i <= maxP * 2; i++) {
        int cost = 0;
        cost = i * C + max(0, X - i / 2) * A + max(0, Y - i / 2) * B;
        minCost = min(minCost, cost);
    }
    cout << minCost << endl;
    return 0;
}