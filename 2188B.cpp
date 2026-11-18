#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>> n >> s;
    
    if(n <= 2){
        cout<< 1 << endl;
        return;
    }
    
    if(s[0] == '0' && s[1] == '0'){
        if(s[2] == '0'){
            s[1] = '1';
        }
        else{
            s[0] = '1';
        }
    }
    
    for(int i = 3 ; i < n ; i++){
        
        if(s[i] == '0' && s[i - 1] == '0' && s[i - 2] == '0'){
            
            if(i + 1 == n || s[i + 1] == '0'){
                s[i] = '1';
            }
            
            else{
                s[i - 1] = '1';
            }
        }
    }
    
    if (s[n - 1] == '0' && s[n - 2] == '0') {
        s[n - 1] = '1';
    }
    
    cout<< count(s.begin(), s.end(), '1') << endl;
    
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
