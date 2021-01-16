//----------------------------------------------------------

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
#define VI_INI(v, a,n) v.resize(a+1,n)
#define VI_SORT(v) sort(data.begin(), data.end())
#define VI_UNSORT(v) sort(data.begin(), data.end(),greater<int>())
#define VVI_INI(v, a, b, n) v.resize(a+1, vector<int>(b+1, n))

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


//----------------------------------------------------------



// 入力
int n, m;
VI c;
VI dp;

const int INF = 999;

int main() { 
    I(n);
    I(m);

    VI_INI(c, m, 0);

    FOR(i, 1, m) { I(c[i]); }

    DBG(n);
    DBG(m);

    DBGV("coin:",c);

    VI_INI(dp, n, 999);

    dp[0] = 0;

    DBGV("dp:", dp);

    FOR(i, 1, n){ 
        FOR(j,1,m){
            if(i-c[j]>=0){
                int m = min(dp[i - 1] + 1, dp[i - c[j]] + 1);
                dp[i] = min(dp[i], m); 
            }else{
                dp[i] = min(dp[i],dp[i - 1] + 1);
            }
        }
    }

    DBGV("dp:",dp);

    O(dp[n]);

    return 0;
}
