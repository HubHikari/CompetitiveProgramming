#include <iostream>
using namespace std;
#define int long long

int N;


main() {
    

    int ans;
    int sum=0;
    cin >> N ;
    for (int i = 1; i <= N; i++){
        ans=0;
        if(i%2==1){
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    ans++;
                }
            }
            if(ans==8){
                sum++;
            }
        }
    }

    cout<<sum<<endl;


    return 0;
}