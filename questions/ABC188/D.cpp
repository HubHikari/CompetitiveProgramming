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

VI a,b,c;
VVI dp;

/* main */

int main() {
    int N,C;
    N=in();
    C=in();
    VI_INI(a,N,0);
    VI_INI(b,N,0);
    VI_INI(c,N,0);

    FOR(i,1,N){
        a[i]=in();
        b[i]=in();
        c[i]=in();
    }
    DBG(N);
    DBG(C);
    DBGV("a",a);
    DBGV("b",b);
    DBGV("c",c);

    vector<pair<int,int>> va,vb;
    FOR(i,1,N){
        va.push_back({ a[i],c[i] });
        vb.push_back({ b[i],c[i] });
    }
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    
    int ans=0;
    int nowprice=0;

    int as=1;
    int bs=1;
    int lastday=0;
    do{
        if(va[as].first>vb[bs].first){
            ans+=nowprice*(va[as].first-lastday);
            lastday=va[as].first;
            nowprice+=va[as].second;
            as++;
        }else if(va[as].first<vb[bs].first){
            ans+=nowprice*(vb[bs].first-lastday);
            lastday=vb[bs].first;
            nowprice-=vb[bs].second;
            bs++;
        }else{
            ans+=nowprice*(vb[bs].first-lastday);
            lastday=vb[bs].first;
            nowprice+=va[as].second-vb[bs].second;
            bs++;
            as++;
        }

    }while(bs<vb[N].first);
    O(ans);
    



    return 0;
}