#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin>> n >> k;
    
    vector<int> x(n);
    for(int i = 0 ; i < n ; i++){
        cin>> x[i];
    }
    
    sort(x.begin(),x.end());
    int l = 0 , r = n - 1;
    int ans = 0;
    
    while(l < r){
        int sum = x[l] + x[r];
        if(sum == k){
            ans++;
            l++;
            r--;
        }
        else if(sum < k)l++;
        else r--;
    }
    
    cout<< ans << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
