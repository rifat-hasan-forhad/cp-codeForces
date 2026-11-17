#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    string s;
    cin >> n >> k >> s;

    int temp = 0;
    for(int i = 0; i < k; i++){
        if(s[i] == 'W') temp++;
    }

    int ans = temp;
    for(int i = k; i < n; i++){
        if(s[i] == 'W') temp++;
        if(s[i - k] == 'W') temp--;
        ans = min(ans, temp);
    }

    cout << ans << '\n';
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
