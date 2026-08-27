#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    string s , t;
    cin>> s >> t;
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s[i] == t[i])ans++;
    }
    cout<< (ans == n ? "YES" : "NO") << "\n";
}

int main() {
	int q;
	cin>> q;
	while(q--){
	    solve();
	}
}
