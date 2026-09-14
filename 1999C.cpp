#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    long long s , m;
    cin>> n >> s >> m;
    
    long long l[n] , r[n];
    for(int i=0;i<n;i++){
        cin>> l[i] >> r[i];
    }
    
    bool found = false;
    
    if(l[0] >= s){
        found = true;
    }
    
    for(int i=0;i<n-1;i++){
        if(l[i + 1] - r[i] >= s){
            found = true;
            break;
        }
    }
    
    if(m - r[n - 1] >= s || found)cout<< "YES" << "\n";
    else cout<< "NO" << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
