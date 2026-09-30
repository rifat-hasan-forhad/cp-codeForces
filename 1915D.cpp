#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>> n >> s;
    
    string ans = "";
    int i = n - 1;
    
    while(i >= 0){
        if(s[i] == 'e' || s[i] == 'a'){
            ans.push_back(s[i]);
            ans.push_back(s[i - 1]);
            i -= 2;
        }else{
            ans.push_back(s[i]);
            ans.push_back(s[i - 1]);
            ans.push_back(s[i - 2]);
            i -= 3;
        }
        if(i >= 0)ans.push_back('.');
    }
    
    reverse(ans.begin(), ans.end());
    cout<< ans << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
