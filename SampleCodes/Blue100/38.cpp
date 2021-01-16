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
#define VI_INI(v, a, n) v.resize(a + 1, n)
#define VI_SORT(v) sort(data.begin(), data.end())
#define VI_UNSORT(v) sort(data.begin(), data.end(), greater<int>())
#define VVI_INI(v, a, b, n) v.resize(a + 1, vector<int>(b + 1, n))

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
#define DBGVV(s, v)                                 \
    cout << "DEBUG " << s << endl;                  \
    {                                               \
        int loopcount = 0;                          \
        int count = 0;                              \
        cout << "      ";                           \
        for (VI nv : v) {                           \
            cout << setw(4) << count++;             \
        }                                           \
        cout << endl;                               \
        for (VI nv : v) {                           \
            cout << setw(4) << loopcount++ << ": "; \
            for (int nnv : nv) {                    \
                cout << setw(4) << nnv;             \
            }                                       \
            cout << endl;                           \
        }                                           \
    }
#else
#define DBG(i)      /* ... */
#define DBGV(s, i)  /* ... */
#define DBGVV(s, i) /* ... */
#endif


const int MAX_N = 1000;

VVI dp;
VL ans;

int main() {
    int qn=in();
    VI_INI(ans, qn, 0);

    REP(i,qn){
        string x, y;
        I(x);
        I(y);
 
        int xn = x.size(), yn = y.size();
        VVI_INI(dp, xn, yn, 0);
        

        FOR(i,0,xn){
            FOR(j,0,yn){
                if (i < xn && j < yn && x[i] == y[j]){
                    dp[i + 1][j + 1] = max(dp[i][j] + 1,dp[i + 1][j + 1] );
                }
                if (i < xn){
                    dp[i + 1][j] = max(dp[i][j],dp[i + 1][j]);
                }
                if (j < yn){
                    dp[i][j + 1] = max(dp[i][j],dp[i][j + 1]);
                }
            }
        }
        ans[i] = dp[xn][yn];
        DBGVV("dp:",dp)
    }

    DBGV("ans:",ans);



    return 0;
}