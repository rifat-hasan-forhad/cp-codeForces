#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    string s;
    cin>> n >> s;
    
    string res = "";
    for(int i = 0; i < n; i++){
        if(!res.empty() && res.back() == s[i]){
            res.pop_back();
        } else {
            res.push_back(s[i]);
        }
    }
    cout << (res.empty() ? "YES" : "NO") << "\n";
}
 
int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}