#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;

    int ans=0;
    for(int i=2;i<=n+1;i++){
        if((n+1)%i == 0){
            ans++;
        }
    }
    if(ans>= 2)cout<< "NO" << endl;
    else cout<< "YES" << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}


