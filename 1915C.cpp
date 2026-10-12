#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<long long> a(n);
    long long sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>> a[i];
        
        sum += a[i];
    }
    
    long long ans = sqrt(sum);
    
    cout<< (ans * ans == sum ? "YES" : "NO") << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
