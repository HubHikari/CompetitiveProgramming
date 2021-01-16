#include <algorithm>
#include <array>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstring>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<long double> VD;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VD> VVD;
typedef pair<int, int> P;
typedef pair<ll, ll> PL;

template <typename T>
void chmin(T &a, T b) {
    if (a > b) a = b;
}
template <typename T>
void chmax(T &a, T b) {
    if (a < b) a = b;
}

int in() {
    int x;
    cin >> x;
    return x;
}
ll lin() {
    ll x;
    cin >> x;
    return x;
}

#define REP(i, n) for (int i = 0; i < n; ++i)
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORR(i, a, b) for (int i = a; i >= b; --i)
#define ALL(c) (c).begin(), (c).end()
#define I(n) cin >> n
#define O(n) cout << n << endl
#define endl() cout << endl

#define pb(n) push_back((n))
#define mp(i, j) make_pair((i), (j))
#define VI_INI(v, n) v.resize(n)
#define VVI_INI(v, a, b, n) v.resize(a, vector<int>(b, n))

#define DEBUG 1  //デバッグモード　0:OFF 1:ON

#if DEBUG
#define DBG(s) cout << "DEBUG " << s << endl
//#define DBG(s, i) cout << "DEBUG " << s << i << endl;
#define DBGV(s, v)         \
    cout << "DEBUG " << s; \
    for (int nv : v) {     \
        cout << nv << " "; \
    }                      \
    cout << endl;
#define DBGVV(s, v)                      \
    cout << "DEBUG " << s << endl;       \
    {                                    \
        int loopcount = 0;               \
        for (VI nv : v) {                \
            cout << loopcount++ << ": "; \
            for (int nnv : nv) {         \
                cout << setw(4) << nnv;  \
            }                            \
            cout << endl;                \
        }                                \
    }
#else
#define DBG(i)      /* ... */
#define DBGV(s, i)  /* ... */
#define DBGVV(s, i) /* ... */
#endif


// 入力
int N, W;

VI weight,value;

VVI dp;


int main() {
    I(N);   //個数
    I(W);   //重さ上限

    VI_INI(weight,N);
    VI_INI(value, N);
    FOR(i, 0, N - 1) { 
        I(value[i]);
        I(weight[i]);
    }

    DBGV("value:",value);
    DBGV("weight:",weight);

    VVI_INI(dp, N+1, W+1, 0);

    DBGVV("dp:",dp);

    FOR(i,0,N-1){
        FOR(w,0,W){
            if (w >= weight[i])
                dp[i + 1][w] =
                    max(dp[i][w - weight[i]] + value[i], dp[i][w]);
            else
                dp[i + 1][w] = dp[i][w];
        }
    }

    DBGVV("dp:", dp);
    O(dp[N][W]);
}
