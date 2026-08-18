#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a , b , c;
    cin>> a >> b >> c;

    int n[3] = {a,b,c};
    sort(n,n+3);
    cout<< n[1] << endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}
