#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n , f , a , b;
    cin>> n >> f >> a >> b;
    
    vector<long long> m(n + 1 , 0);
    for(int i = 1 ; i <= n ; i++){
        cin>> m[i];
    }
    
    for(int i = 1 ; i <= n ; i++){
        f -= min(a * (m[i] - m[i - 1]) , b);
    }
    
    cout<< (f > 0 ? "YES" : "NO") << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
