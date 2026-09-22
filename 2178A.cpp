#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>> s;
    
    int cnt_Y = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'Y')cnt_Y++;
    }
    
    cout<< (cnt_Y <= 1 ? "YES" : "NO") << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
