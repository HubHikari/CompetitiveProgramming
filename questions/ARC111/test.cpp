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

long long pow_mod(long long n,long long k,long long m){
    if(k==0){
        return 1;
    }else if(k%2==1){
        return pow_mod(n,k-1,m)*n%m;
    }else{
        long long t=pow_mod(n,k/2,m);
        return t*t%m;
    }
}

int main(){
    long long N,M;
    cin>>N;
    cin>>M;
    long long c;
    

    c=pow_mod(10,N,M*M);
    long long ans=c/M;
    cout<<ans;


    return 0;
}