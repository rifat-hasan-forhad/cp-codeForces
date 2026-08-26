#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    string s;
    cin>> s;
    
    int ans = 1 , temp = 1;
    for(int i=1;i<n;i++){
        if(s[i] != s[i-1]) temp = 1;
        else temp++;
        
        ans = max(ans,temp);
    }
    cout<< ans+1 << "\n";
}

int main() {
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}
