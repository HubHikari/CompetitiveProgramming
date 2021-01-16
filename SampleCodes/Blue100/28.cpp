#include <algorithm>
#include <array>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdio>
#include <deque>
#include <fstream>
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
#define O(n) cout << n
#define endl() cout << endl
#define pb(n) push_back((n))
#define mp(i, j) make_pair((i), (j))

#define DEBUG 1  //デバッグモード　0:OFF 1:ON

#if DEBUG
#define DBG(s, i) cout << "DEBUG " << s << i << endl;
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
        for (VL nv : v) {                \
            cout << loopcount++ << ": "; \
            for (int nnv : nv) {         \
                cout << nnv << " ";      \
            }                            \
            cout << endl;                \
        }                                \
    }
#else
#define DBG(s, i)   /* ... */
#define DBGV(s, i)  /* ... */
#define DBGVV(s, i) /* ... */
#endif



//BFS用クラス
class BFS {
   public:
    VVL G;      //頂点
    VL dist;    //頂点からの距離
    queue<int> que; //探索キュー

    //頂点初期化
    void Initialize(int point_num) {
        G.resize(point_num + 1);
        dist.resize(point_num + 1, -1);  // 全頂点を「未訪問」に初期化
        //探索キューの初期化
        while(!que.empty()){
            que.pop();
        }
    }

    //探索開始頂点設定
    void SetFirst(int first_point) {
        dist[first_point] = 0;  //最初の頂点の距離は0
        que.push(first_point);  // 0 を橙色頂点にする
    }


    //辺製作
    void EdgeSet(int begin, int end) { G[begin].pb(end); }

    //探索実行
    void Search_Execute() {
        // BFS 開始 (キューが空になるまで探索を行う)
        while (!que.empty()) {
            int v = que.front();  // キューから先頭頂点を取り出す
            que.pop();

            DBG("Now:", v);

            // v から辿れる頂点をすべて調べる
            for (int nv : G[v]) {
                if (dist[nv] != -1) {
                    continue;  // すでに発見済みの頂点は探索しない
                }

                // 新たな白色頂点 nv について距離情報を更新してキューに追加する
                dist[nv] = dist[v] + 1;
                que.push(nv);
            }
        }
    }
};


int main() {
    // 頂点数
    int N;
    I(N);

    // BFS初期化
    BFS bfs;
    bfs.Initialize(N);

    //辺の代入
    FOR(i, 1, N) {
        int a = in();
        int c = in();
        REP(j, c) {
            int b = in();
            bfs.EdgeSet(a, b);

            // G[b].push_back(i);
        }
    }

    DBGVV("G:", bfs.G);

    //最初に探索する頂点の設定
    bfs.SetFirst(1);

    //探索実行
    bfs.Search_Execute();

    // 結果出力 (各頂点の頂点 0 からの距離を見る)
    FOR(i, 1, N) {
        O(i);
        O(" ");
        O(bfs.dist[i]);
        endl();
    }



    return 0;
}