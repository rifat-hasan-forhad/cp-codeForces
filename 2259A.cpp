#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    string s;
    cin>> n >> k >> s;
    
    int ans = 0;
    for(int i=0;i<n;i+=k){
        bool count_1 = true;
        for(int j=0;j<k;j++){
            if(s[i + j] == '0')count_1 = false;
        }
        if(count_1)ans++;
    }
    cout<< ans << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
