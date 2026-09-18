#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>> n >> s;
    
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s[i] == 'U')ans++;
    }
    
    cout<< (ans %2 != 0 ? "YES" : "NO") << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
