#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n , k;
    cin>> n >> k;
    
    long long a = pow(2 , n - k + 1);
    long long ans = a + 2 * (k - 1);
    
    cout<< ans << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
