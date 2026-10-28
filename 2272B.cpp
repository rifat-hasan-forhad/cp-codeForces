#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s1 , s2;
    cin>> n >> s1 >> s2;
    
    int s1_f = count(s1.begin(), s1.end(), 'f');
    int s2_f = count(s2.begin(), s2.end(), 'f');
    
    int ans = s1_f + s2_f;
    cout<< ans % 2 << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
