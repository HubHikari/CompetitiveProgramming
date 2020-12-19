#include <bits/stdc++.h>
using namespace std;
 
int N;
int x[10], y[10];
 
double dist(int i, int j) {
    double dx = x[i] - x[j];
    double dy = y[i] - y[j];
    return pow(dx * dx + dy * dy, 0.5);
}
 
void solve() {
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> x[i] >> y[i];
    double sum = 0.0;
    vector<int> v(N);
    for(int i = 0; i < N; i++) v[i] = i + 1;
    do {
        for(int i = 0; i < N - 1; i++) sum += dist(v[i], v[i+1]);
    } while(next_permutation(v.begin(), v.end()));
    int Factorial = 1;
    for(int i = 2; i <= N; i++) Factorial *= i;
    cout << fixed << setprecision(10) << sum / Factorial << endl;
    return;
}
 
int main() {
    solve();
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
 
int N;
int x[10], y[10];
 
double dist(double x1, double y1, double x2, double y2) {
    double dx = x1 - x2;
    double dy = y1 - y2;
    return pow(dx * dx + dy * dy, 0.5);
}
 
main() {
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cin >> x[i] >> y[i];
    }
  
    for(int i = 1; i < N ; i++) {
        cout << fixed << setprecision(10) << dist(x[i], y[i],x[i+1],y[i+1]) << endl;
    }
    
    return 0;
}
*/





/*
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long

int N, C[10][4];
int A[11][11];
int P[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
double ans= 0;


double getDistance(double x, double y, double x2, double y2) {
    double distance = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
    cout << distance << endl;
    return distance;
}

int factorial(int n) {
    if (n > 0) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> C[i][0] >> C[i][1];
    }

    
    cout << N << endl;

    for (int i = 1; i <= N; i++) {
        cout << C[i][0] <<" "<< C[i][1]<<endl;
    }
    


    do {
        double ret = 0;
        for (int i = 0; i < N-1; i++) {
            ret += getDistance(C[P[i]][0],C[P[i]][1],C[P[i+1]][0],C[P[i+1]][1]);
        }
        ans += ret;
        
    } while(next_permutation(P, P + N));
    cout << ans << endl;
    cout << ans/factorial(N) << endl;

    return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
using namespace std;

int N, A[11][11], ans = 1000000000;
int P[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) cin >> A[i][j];
    }
    do {
        int ret = 0;
        for (int i = 0; i < N - 1; i++) ret += A[P[i]][P[i + 1]];
        ans = min(ans, ret);
    } while(next_permutation(P, P + N));

    cout << ans << endl;
    return 0;
}
*/