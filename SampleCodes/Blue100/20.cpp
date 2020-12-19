#include <bits/stdc++.h>
using namespace std;
 
vector<int> S;
// index が条件を満たすかどうか
bool isOK(int index, int key) {
    if (S[index] >= key) return true;
    else return false;
}

// 汎用的な二分探索のテンプレ
int binary_search(int key) {
    int ng = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int ok = (int)S.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

   
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;

        if (isOK(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}

int main() {
	int n, q; 
    cin >> n;
 
	//vector<int> S(n);

	for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        S.push_back(a);
    }
    cin >> q;
 
	vector<int> T(q);
	for (int i = 0; i < q; ++i) {
        cin >> T[i];
    }
    /*
    cout<<n<<" "<<q<<endl;

 
	for (int i = 0; i < n; ++i) {
        cout << S[i] <<" ";
    }
    cout<<endl;

	for (int i = 0; i < q; ++i) {
        cout << T[i] <<" ";
    }
    cout<<endl;
    */
    int sum=0;

	for (int i = 0; i < q; ++i) {
        int min=binary_search(T[i]);
        if(T[i]==S[min]){
            sum++;
        }
        
    }
    cout<<sum<<endl;



	return 0;
}
