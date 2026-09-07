#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>> s;
    
    if(s[0] == 'a' && s[1] == 'b'){
        cout<< "YES" << "\n";
        return;
    }
    
    if(s[0] == 'a' && s[1] == 'c'){
        cout<< "YES" << "\n";
        return;
    }
    
    if(s[0] == 'b' && s[1] == 'a'){
        cout<< "YES" << "\n";
        return;
    }
    
    if(s[0] == 'c' && s[2] == 'a'){
        cout<< "YES" << "\n";
        return;
    }
    
    cout<< "NO" << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
