#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;

    if(n%4 == 0){
        cout<< n/4 << endl;
    }else{
        int rem = n%4;

        int div = (n-rem)/4;

        cout<< div+1 << endl;
    }
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}

