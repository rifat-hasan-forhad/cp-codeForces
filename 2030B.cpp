#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<string> s(n);
    s[0] = '1';
    for(int i=1;i<n;i++){
        s[i] = '0';
    }
    
    for(int i=0;i<n;i++){
        cout<< s[i];
    }
    cout<< "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
