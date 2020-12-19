#include <bits/stdc++.h>
using namespace std;
 
int N;

 
main() {
    cin >> N;
    vector<int> P(N+1),Q(N+1);
    for(int i = 1; i <= N; i++) cin >> P[i] ;
    for(int i = 1; i <= N; i++) cin >> Q[i];

    vector<int> v(N+1);
    for(int i = 1; i <= N; i++) {
        v[i] = i;
    }
    int PNum=0;
    int PFlag;
    do {
        PFlag=1;
        PNum++;
        for(int i = 1; i <= N ; i++) {  
            //cout<<v[i] <<" "<<P[i]<<endl;          
            if(v[i]!=P[i]){
                PFlag=0;
            }
        }
        if(PFlag==1){
            //cout<<"yes"<<endl;
            break;
        }else{
            //cout<<"no"<<endl;
        }
    } while(next_permutation(v.begin(), v.end()));


    int QNum=0;
    int QFlag;
    for(int i = 1; i <= N; i++) {
        v[i] = i;
    }
    do {
        QFlag=1;
        QNum++;
        for(int i = 1; i <= N ; i++) {  
            //cout<<v[i] <<" "<<Q[i]<<endl;          
            if(v[i]!=Q[i]){
                QFlag=0;
            }
        }
        if(QFlag==1){
            //cout<<"yes"<<endl;
            break;
        }else{
            //cout<<"no"<<endl;
        }
    } while(next_permutation(v.begin(), v.end()));

    cout << abs(PNum-QNum) << endl;
    return 0;
}
