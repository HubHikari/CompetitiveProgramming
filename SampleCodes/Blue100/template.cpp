#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <algorithm>
#include <complex>
#include <array>

using namespace std;

#define REP(i, n) for (int i = 0; i < n; ++i)
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORR(i, a, b) for (int i = a; i >= b; --i)
#define ALL(c) (c).begin(), (c).end()
#define I(n) scanf("%d", &(n))
#define pb(n) push_back((n))
#define mp(i, j) make_pair((i), (j))


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
void chmin(T &a, T b)
{
    if (a > b)
        a = b;
}
template <typename T>
void chmax(T &a, T b)
{
    if (a < b)
        a = b;
}

int in()
{
    int x;
    scanf("%d", &x);
    return x;
}
ll lin()
{
    ll x;
    scanf("%lld", &x);
    return x;
}

const int N = 200010;
VI e[N];
ll c[N], ans[N];

void dfs(int now, int past, ll x)
{
    x += c[now];
    ans[now] = x;
    for (int next : e[now])
    {
        if (next == past)
            continue;
        dfs(next, now, x);
    }
}

int main()
{
    int n, q;
    cin >> n >> q;
    REP(i, n - 1)
    {
        int u = in() - 1, v = in() - 1;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    REP(i, q)
    {
        int x = in() - 1, v = in();
        c[x] += v;
    }
    dfs(0, -1, 0);
    REP(i, n)
    printf("%lld ", ans[i]);
    cout << endl;

    return 0;
}