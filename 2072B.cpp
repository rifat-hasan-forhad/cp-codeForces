#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>> n >> s;
    
    long long minus = count(s.begin(), s.end(), '-');
    long long dash = n - minus;
    long long ans = (minus/2) * (minus - minus/2) * dash;
    
    cout<< ans << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
