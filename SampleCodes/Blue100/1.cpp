#include <iostream>
using namespace std;
#define int long long


int n,x;

main() {
    int ans;
    while(true){
        ans=0;
        cin >> n >> x;

        if(n==0 & x==0){
            break;
        }

        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                for(int k=j+1;k<=n;k++){
                    if(i+j+k==x){
                        cout<<i<<j<<k<<endl;
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }



    return 0;
}