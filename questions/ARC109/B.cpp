#include <iostream>
using namespace std;


int main() {
    #define int long long
    int n;
    cin >> n;

    int i=0;
    int diff=1;
    int beforediff=0;
    while(true){
        if(i*(i+1)<=2*(n+1)){
            i+=diff;
            diff*=2;
        }else{
            beforediff=diff/2;
            i-=beforediff;
            if(beforediff==0){
                break;
            }
            diff=1;
            i++;
        }
        
        //cout << "i:"<<i<< endl;
    }
    cout << n-i+2 << endl;
}