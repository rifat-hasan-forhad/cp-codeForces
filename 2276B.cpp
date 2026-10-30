#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>> s;
    
    int ans = 1;
    
    if(s.find("101") != string::npos || s.find("010") != string::npos){
        ans += 1;
    }
    
    if(s.find("000") != string::npos || s.find("111") != string::npos){
        ans += 1;
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
