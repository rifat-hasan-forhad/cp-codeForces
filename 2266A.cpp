#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , a , b , c;
    cin>> n >> a >> b >> c;
    
    int mn = min({a , b , c});
    
    cout<< n - mn << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
