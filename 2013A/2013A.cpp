#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n , x , y;
    cin>> n >> x >> y;

    int cnt = min(x,y);

    cout<< (n+cnt-1)/cnt << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
