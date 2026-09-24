#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s , f;
    cin>> n >> s >> f;
    
    int a = 0 , b = 0;
    
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '0' && f[i] == '1')a++;
        if(s[i] == '1' && f[i] == '0')b++;
    }
    
    cout<< max(a , b) << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
