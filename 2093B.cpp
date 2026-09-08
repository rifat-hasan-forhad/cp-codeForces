#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>> s;
    
    int n = s.size();
    
    bool found = false;
    int cnt = 1;
    
    for(int i=n-1;i>0;i--){
        if(s[i] != '0'){
            found = true;
        }
        else if(found){
            cnt++;
        }
    }
    
    cout<< n - cnt << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
