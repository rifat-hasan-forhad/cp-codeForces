#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>> n;

    long long ans = 1;
    while(n > 3){
        n = n/4;
        ans = ans * 2;
    }
    cout<< ans << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
