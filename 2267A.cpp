#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
        char c;
        string s;
        cin >> n >> c >> s;
        
        int coins = 0;
        
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - 1 - i]) {
                if (s[i] == c || s[n - 1 - i] == c) {
                    coins += 1;
                } else {
                    coins += 2;
                }
            }
        }
        
        cout << coins << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
    
}
