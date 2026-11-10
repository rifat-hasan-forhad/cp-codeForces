#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<int> a(n);
    for(auto &i : a){
        cin>> i;
    }
    
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = n - a[i] + 1;
    }
    
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
	int t ;
	cin>> t;
	while(t--){
	    solve();
	}
}