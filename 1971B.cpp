#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>> s;
    
    int n = s.size();
    
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i] == s[0])cnt++;
    }
    
    if(n == cnt)cout<< "NO" << "\n";
    else{
        for(int i=0;i<n-1;i++){
            if(s[i] != s[i+1]){
                swap(s[i],s[i+1]);
            }
        }
        cout<< "YES" << "\n";
        cout<< s << "\n";
    }
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
