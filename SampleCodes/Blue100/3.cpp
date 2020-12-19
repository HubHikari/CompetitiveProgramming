#include <iostream>
using namespace std;
#define int long long

string a;

main() {
    cin >> a ;
    int maxL=0;
    int len=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='A' |a[i]=='T' |a[i]=='C' |a[i]=='G'){
            len++;
        }else{
            maxL=max(maxL,len);
            len=0;
        }
    }
    maxL=max(maxL,len);




    cout<<maxL<<endl;


    return 0;
}