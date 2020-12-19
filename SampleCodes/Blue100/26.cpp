#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
vector<int> first_order; // 行きがけ順
vector<int> last_order;  // 帰りがけ順
vector<int> counter;  // 帰りがけ順

void dfs(const Graph &G, int v, int &ptr,int point)
{
    // 行きがけ順をインクリメントしながらメモ
    first_order[v] = ptr++;
    if(seen[v]==false){
        counter[v] += point;
        cout << v << " " << point << endl;
    }
    

    seen[v] = true;
    for (auto next_v : G[v])
    {
        if (seen[next_v] || next_v<v)
            continue;
        dfs(G, next_v, ptr, point);
    }

    // 帰りがけ順をインクリメントしながらメモ
    last_order[v] = ptr++;
}

int main()
{
    // 頂点数と辺数
    int N, Q;
    vector<int> p; // 行きがけ順
    vector<int> x;  // 帰りがけ順
    cin >> N >> Q;
    cout << "a" << endl;
    // グラフ入力受取 (ここでは無向グラフを想定)
    Graph G(N+1);
    for (int i = 0; i < N-1; ++i)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    cout << "b" << endl;
    for (int i = 1; i < Q+1; ++i)
    {
        int a, b;
        cin >> a >> b;
        p.push_back(a);
        x.push_back(b);
        cout << "b2" << endl;
    }
    // 頂点 0 をスタートとした探索
    seen.assign(N, false); // 全頂点を「未訪問」に初期化
    first_order.resize(N+1);
    last_order.resize(N+1);
    counter.resize(N+1);

    for (int i = 1; i < Q+1;i++){
        int ptr = 0;
        seen.assign(N, false); // 全頂点を「未訪問」に初期化
        dfs(G, p[i], ptr, x[i]);
        
        cout << "c" << endl;
    }

    // 各頂点 v の行きがけ順、帰りがけ順を出力
    for (int v = 1; v < N+1; ++v){
        cout << v << ": " << first_order[v] << ", " << last_order[v] << ", " << counter[v] << endl;
    }
    cout << "d"<<endl;
}
/*
#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
vector<int> first_order; // 行きがけ順
vector<int> last_order;  // 帰りがけ順

void dfs(const Graph &G, int v, int &ptr)
{
    // 行きがけ順をインクリメントしながらメモ
    first_order[v] = ptr++;

    seen[v] = true;
    for (auto next_v : G[v])
    {
        if (seen[next_v])
            continue;
        dfs(G, next_v, ptr);
    }

    // 帰りがけ順をインクリメントしながらメモ
    last_order[v] = ptr++;
}

int main()
{
    // 頂点数と辺数
    int N, M;
    cin >> N >> M;

    // グラフ入力受取 (ここでは無向グラフを想定)
    Graph G(N);
    for (int i = 0; i < M; ++i)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 頂点 0 をスタートとした探索
    seen.assign(N, false); // 全頂点を「未訪問」に初期化
    first_order.resize(N);
    last_order.resize(N);
    int ptr = 0;
    dfs(G, 0, ptr);

    // 各頂点 v の行きがけ順、帰りがけ順を出力
    for (int v = 0; v < N; ++v)
        cout << v << ": " << first_order[v] << ", " << last_order[v] << endl;
}
*/