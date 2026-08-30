#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a[7], ans = 0;
    for(int i=0;i<7;i++){
        cin>> a[i];
    }
    
    sort(a,a+7);
    
    for(int i=0;i<7;i++){
        if(i == 6){
            ans += a[i];
        }else {
            ans += (a[i]*(-1));
        }
    }
    cout<< ans << "\n";
}

int main() {
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}
