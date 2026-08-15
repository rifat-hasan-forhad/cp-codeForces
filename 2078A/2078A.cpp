#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , x ;
    cin>> n >> x;

    int a[n] , sum = 0;
    for(int i=0;i<n;i++){
        cin>> a[i];

        sum = sum + a[i];
    }

    if(sum == n*x)cout<< "YES" << endl;
    else cout<< "NO" << endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}

