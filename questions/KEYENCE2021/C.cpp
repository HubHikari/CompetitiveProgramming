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



#define DEBUG 0  //デバッグモード　0:OFF 1:ON




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

VI A;
VI winner;

/* main */

int main() {
    int N=in();
    int num=1<<N;
    VI_INI(A,num,0);
    VI_INI(winner,num,1);
    FOR(i,1,num){
        A[i]=in();
    }
    FOR(j,1,N){
        FOR(i,1,num){
            int a=0;
            int b=0;
            if(winner[i]==1){
                a=i;
                i++;
                while(winner[i]!=1){
                    i++;
                }
                if(A[i]>A[a]){
                    winner[a]=0;
                    if(j==N){
                        O(a);
                    }
                }else{
                    winner[i]=0;
                    if(j==N){
                        O(i);
                    }
                }
                
            }
        }
        DBGV("a",A);
        DBGV("w",winner);
        
    }





    return 0;
}