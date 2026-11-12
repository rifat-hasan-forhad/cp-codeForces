#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>> n >> s;
    
    int ans = 0;
    
    if(s[0] == 'B'){
        ans = 1;
    }
    
    for(int i = 1 ; i < n ; i++){
        if(s[i] == s[i - 1])ans++;
    }
    
    cout<< ans << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
