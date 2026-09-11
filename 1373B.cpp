#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>> s;
    
    int zeros = 0, ones = 0;
    for(char c : s) {
        if(c == '0') zeros++;
        else ones++;
    }
    
    int cnt = min(zeros, ones);
    cout << (cnt % 2 == 1 ? "DA" : "NET") << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
