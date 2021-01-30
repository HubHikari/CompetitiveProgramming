#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <cfloat>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <iostream>
typedef long long int ll;
typedef unsigned long long int ull;
#define BIG_NUM 2000000000
#define MOD 1000000007
#define EPS 0.000000001
using namespace std;

int N;
ll H[100000];

int L[100000],R[100000];
stack<int> S;


int main(){

	scanf("%d",&N);
	for(int i = 0; i < N; i++)scanf("%lld",&H[i]);

	for(int i = 0; i < N; i++){
		while(S.empty() == false && H[S.top()] >= H[i])S.pop();
		if(S.empty()){
			L[i] = 0;
		}else{
			L[i] = S.top()+1;
		}
		S.push(i);
	}

	while(!S.empty())S.pop();

	for(int i = N-1; i >= 0; i--){
		while(S.empty() == false && H[S.top()] >= H[i])S.pop();
		if(S.empty()){
			R[i] = N-1;
		}else{
			R[i] = S.top()-1;
		}
		S.push(i);
	}

	ll ans = 0;
	for(int i = 0; i < N; i++)ans = max(ans,H[i]*(ll)(R[i]-L[i]+1));

	printf("%lld\n",ans);

	return 0;
}