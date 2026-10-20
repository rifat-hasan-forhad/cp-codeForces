#include <bits/stdc++.h>
using namespace std;

long long cal(long long n){
    if(n %2 == 0)return n / 2;
    else return -(n + 1) / 2;
}

void solve(){
    long long l , r;
    cin>> l >> r;
    
    long long ans = cal(r) - cal(l - 1);
    
    cout<< ans << "\n";
}

int main() {
	int q;
	cin>> q;
	while(q--){
	    solve();
	}
}
