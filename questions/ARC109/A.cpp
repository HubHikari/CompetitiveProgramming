#include <iostream>
using namespace std;

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >>y;
    int minTime=0;
    if (a <=b){
        if(2*x>y){
            minTime=(b-a)*y+x;
        }else{
            minTime=(b-a)*2*x+x;
        }

    }else{
        if(2*x>y){
            minTime=(a-b-1)*y+x;
        }else{
            minTime=(a-b-1)*2*x+x;
        }

    }
 
    cout << minTime << endl;
}