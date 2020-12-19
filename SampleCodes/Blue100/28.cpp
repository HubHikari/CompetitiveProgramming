
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define DEBUG 1

#if DEBUG
#define DBG(s, i) cout << "DEBUG " << s << ":" << i << endl;
#define DBGV(s, v)                 \
    cout << "DEBUG " << s << ": "; \
    for (int nv : v)               \
    {                              \
        cout << nv << " ";         \
    }                              \
    cout << endl;
#else
#define dbg(s, i)  /* ... */
#define dbgv(s, i) /* ... */
#endif

using Graph = vector<vector<int>>;

int main()
{
    // 頂点数と辺数、s と t
    int N;
    cin >> N;
    // グラフ入力受取
    Graph G(N + 1);
    for (int i = 1; i <= N; ++i)
    {
        int a, c;
        cin >> a >> c;

        for (int j = 0; j < c; j++)
        {
            int b;
            cin >> b;
            G[a].push_back(b);
            //G[b].push_back(i);
        }
        cout << i << endl;
    }

    DBGV("G1:", G[1]);
    DBGV("G1:", G[2]);
    DBGV("G1:", G[3]);
    DBGV("G1:", G[4]);

    // BFS のためのデータ構造
    vector<int> dist(N + 1, -1); // 全頂点を「未訪問」に初期化
    queue<int> que;

    // 初期条件 (頂点 0 を初期ノードとする)
    dist[1] = 0;
    que.push(1); // 0 を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty())
    {
        int v = que.front(); // キューから先頭頂点を取り出す
        que.pop();
        cout << "Now:" << v << endl;

        // v から辿れる頂点をすべて調べる
        for (int nv : G[v])
        {
            if (dist[nv] != -1)
            {
                continue; // すでに発見済みの頂点は探索しない
            }

            // 新たな白色頂点 nv について距離情報を更新してキューに追加する
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }

    // 結果出力 (各頂点の頂点 0 からの距離を見る)
    for (int v = 1; v <= N; ++v)
        cout << v << ": " << dist[v] << endl;
}