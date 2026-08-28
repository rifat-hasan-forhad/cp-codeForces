#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a , b , n;
    cin>> a >> b >> n;
    
    cout<< ((b * n <= a || b >= a) ? "1" : "2") << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
