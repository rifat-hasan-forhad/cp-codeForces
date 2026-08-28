#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin>> n >> k;
    
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    
    sort(a.begin(), a.end());
    
    int ans = 1 , temp = 1;
    for(int i=1;i<n;i++){
        if(a[i] - a[i - 1] > k){
            temp = 1;
        }else temp++;
        
        ans = max(ans, temp);
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
