#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    string s[n] , t;
    for(int i=0;i<n;i++){
        cin>> s[i];
    }
    
    for(int i=0;i<n;i++){
        t = min(t+s[i] , s[i]+t);
    }
    
    cout<< t << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
