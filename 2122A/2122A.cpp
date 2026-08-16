#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>> n >> m;

    if(n==1 || m==1 || (n==2 && m==2))cout<< "NO" << endl;
    else cout<< "YES" << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
