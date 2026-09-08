#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    int a[n];
    int cnt_0s = 0;
    for(int i=0;i<n;i++){
        cin>> a[i];
        
        if(a[i] == 0)cnt_0s++;
    }
    
    if(a[0] == 0 && a[n-1] == 0)cout<< 0 << "\n";
    else if(a[0] == 1 && a[n-1] == 1 && cnt_0s >= 2)cout<< 2 << "\n";
    else if((a[0] == 1 || a[n-1] == 1) && cnt_0s > 1)cout<< 1 << "\n";
    else cout<< -1 << "\n";
}

int main() {
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}
