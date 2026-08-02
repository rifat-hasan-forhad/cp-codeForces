#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while(t--){
        int n,k,p;
        cin>> n >> k >> p;

        int value =abs(k);

        if(n*p >= value){
            cout<< ceil((float)value/p) << "\n";
        }else cout << -1 << "\n";
    }
}
