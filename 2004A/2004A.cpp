#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;

    int x[n];
    for(int i=0;i<n;i++){
        cin>> x[i];
    }

    if(n>2 || x[0] - x[1] == -1)cout<< "NO" << endl;
    else cout<< "YES" << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
