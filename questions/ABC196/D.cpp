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



#define DEBUG 1  //デバッグモード　0:OFF 1:ON




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



#if DEBUG
#define DBG(s) cout << "DEBUG " << s << endl
//#define DBG(s, i) cout << "DEBUG " << s << i << endl;
#define DBGV(s, v)         \
    cout << "DEBUG " << s; \
    for (int nv : v) {     \
        cout << nv << " "; \
    }                      \
    cout << endl;
#define DBGVV(s, v, w)                                 \
    cout << "DEBUG " << s << endl;                  \
    {                                               \
        int loopcount = 0;                          \
        int count = 0;                              \
        cout << "      ";                           \
        for (VI nv : v) {                           \
            cout << setw(w) << count++;             \
        }                                           \
        cout << endl;                               \
        for (VI nv : v) {                           \
            cout << setw(w) << loopcount++ << ": "; \
            for (int nnv : nv) {                    \
                cout << setw(w) << nnv;             \
            }                                       \
            cout << endl;                           \
        }                                           \
    }
#else
#define DBG(i)      /* ... */
#define DBGV(s, i)  /* ... */
#define DBGVV(s, i) /* ... */
#endif


const int INF = 1 << 30;

/* main */

const int MAX_M = 17;

int dp[2][1 << MAX_M];
bool color[17][17];

void solve(int n,int m){
    int *crt = dp[0], *next = dp[1];
    crt[0] = 1;
    FORR(i,n-1,0){
        FORR(j,m-1,0){
            FOR(used,0,1<<m){
                if((used>>j &1)||color[i][j]){
                    next[used] = crt[used & ~(1 << j)];

                }else{
                    int res = 0;
                    if(j+1<m && !(used >>(j+1)&1)&&!color[i][j+1]){
                        res += crt[used | 1 << (j + i)];

                    }
                    if(i+1<n && !color[i+1][j]){
                        res += crt[used | 1 << j];
                    }
                    next[used] = res % m;
                }
            }
            swap(crt, next);
        }
    }

    O(crt[0]);
}

int main() {
    int H=in();
    int W=in();
    int A=in();
    int B=in();

    solve(H, W);
    return 0;
}