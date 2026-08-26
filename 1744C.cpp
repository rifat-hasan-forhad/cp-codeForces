#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    char c;
    cin>> n >> c;
    
    string s;
    cin>> s;
    
    if(c == 'g'){
        cout<< 0 << "\n";
        return;
    }
    
    s += s;
    
    int ans = 0 , g = -1;
    for(int i=2*n-1;i>=0;i--){
        if(s[i] == 'g'){
            g = i;
        }
        
        if(s[i] == c && i < n && g != -1){
            ans = max(ans , g - i);
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
