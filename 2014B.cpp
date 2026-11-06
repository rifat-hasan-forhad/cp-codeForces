#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n , k;
    cin>> n >> k;
    
    int odd_cnt = (n + 1) / 2;
    int limit = (n - k + 1) / 2;
    
    int sum = odd_cnt - limit;
    
    cout<< (sum %2 == 0 ? "YES" : "NO") << endl;
}
 
int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}