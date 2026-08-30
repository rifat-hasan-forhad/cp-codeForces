#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    long long a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    
    cout<< gcd(a[0],a[n-1]) << "\n";
}

int main() {
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}
