#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>> s;
    
    int n = s.size();
    
    int ans = 0;
    for(int i=1;i<n-1;i++){
        if(s[i] == '(')ans++;
        else ans--;
        
        if(ans < 0){
            cout<< "YES" << "\n";
            return;
        }
    }
    cout<< (ans == 0 ? "NO" : "YES") << "\n";
}

int main() {
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}
