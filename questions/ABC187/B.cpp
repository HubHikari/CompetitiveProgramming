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

#define DEBUG 0  //デバッグモード　0:OFF 1:ON

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

VI X,Y;
VVI N;

/* main */

bool katamuki(int x1,int y1,int x2,int y2){

    double k=double((y2-y1))/(x2-x1);
    if( abs(k)<=1){
        return true;
    }else{
        return false;
    }
}

int main() {
    int N=in();
    VI_INI(X, N, 0);
    VI_INI(Y, N, 0);


    FOR(i, 1, N) { 
        I(X[i]);
        I(Y[i]);
    }

    DBG(N);
    DBGV("X:",X);
    DBGV("Y:",Y);

    int ans=0;

    FOR(i,1,N){
        FOR(j,i+1,N){
            if(katamuki(X[i],Y[i],X[j],Y[j])){
                ans++;
            }

        }
    }
    O(ans);


    return 0;
}