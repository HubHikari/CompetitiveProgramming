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
#define VVI_INI(v, a, b, n) v.resize(a, vector<int>(b,n))

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
                cout << setw(4) << nnv ; \
            }                            \
            cout << endl;                \
        }                                \
    }
#else
#define DBG(i)   /* ... */
#define DBGV(s, i)  /* ... */
#define DBGVV(s, i) /* ... */
#endif



// 四方向への移動ベクトル
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

// 入力
int R, C;
vector<string> field;
queue<P> que;  //探索キュー
// 探索
VVI seen;
void bfs() {
    while(!que.empty()){        //探索キューが存在する間
        //キューの取り出し
        P v = que.front();
        que.pop();

        //各方向の探索
        FOR(dir,0,3){
            int nh = v.first + dy[dir];
            int nw = v.second + dx[dir];

            if (nh < 0 || nh >= R || nw < 0 || nw >= C) continue;   //範囲外
            if (field[nh][nw] == '#') continue;                     // "#"に当たった

            if (seen[nh][nw] != -1) {   //探索済み or キューに追加済み
                continue;
            }

            seen[nh][nw] = seen[v.first][v.second] + 1; //距離の更新

            que.push(P(nh, nw));  // 再帰的に探索
        }

    }

}

int main() {
    // 入力受け取り
    R = in();
    C = in();
    int Sy = in()-1;
    int Sx = in()-1;
    int Gy = in()-1;
    int Gx = in()-1;

    field.resize(R);
    FOR(h, 0, R-1) { I(field[h]); }

    /*
    // s と g のマスを特定する
    int sh, sw, gh, gw;
    for (int h = 0; h < R; ++h) {
        for (int w = 0; w < C; ++w) {
            if (field[h][w] == 's') sh = h, sw = w;
            if (field[h][w] == 'g') gh = h, gw = w;
        }
    }
    */

    // 探索開始

    VVI_INI(seen, R, C,-1);     //初期化

    //探索開始地点の設定
    seen[Sy][Sx] = 0;
    que.push(P(Sy,Sx));
    DBGVV("seen:",seen);
    bfs();
    DBGVV("seen:", seen);

    // 結果
    O(seen[Gy][Gx]);
}
