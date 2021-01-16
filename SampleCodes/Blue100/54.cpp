
using namespace std;
using vi = vector<int>;
#define pb push_back
#define all(v) (v).begin(), (v).end()

int main() {
    int N;
    cin >> N;
    vi a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    vi dp;

    for (int x : a) {  //配列aの各値を順番に新規入力 x とする
        auto itr = lower_bound(all(dp), x);
        if (itr != dp.end()) {
            // itrが a_p <= x < a_q となるa_pへのイテレータ
            *itr = x;
        } else {
            // xが既存のdpテーブルのどの値よりも大きい
            dp.pb(x);
        }
    }

    int ans = dp.size();
    cout << ans << endl;
}