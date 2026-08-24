#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    long long c;
    cin>> n >> c;
    
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    
    sort(a.rbegin(),a.rend());
    
    long long mul = 1;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(mul > c)break;
        
        if(a[i] * mul <= c){
            ans++;
            mul = mul * 2;
        }
    }
    cout<< n - ans << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}

