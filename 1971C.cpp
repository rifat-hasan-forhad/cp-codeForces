#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a , b , c , d;
    cin>> a >> b >> c >> d;
    
    int s = min(a,b);
    int e = max(a,b);
    
    int ans = 0;
    for(int i=s;i<=e;i++){
        if(i == c || i == d)ans++;
    }
    
    cout<< ((ans == 2 || ans == 0) ? "NO" : "YES") << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
