#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>> s;
    
    int n = s.size();
    
    for(int i = 1 ; i < n ; i++){
        if(s[i - 1] == s[i]){
            cout<< 1 << endl;
            return;
        }
    }
    
    cout<< n << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
