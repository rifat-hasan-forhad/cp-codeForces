#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<long long> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>> a[i];
    }
    
    int mn = -1, mx = -1;
    for(int i = 1 ; i < n ; i++){
        if(a[i] == a[i - 1]){
            if(mn == -1){
                mn = i;
            }
            mx = i;
        }
    }
    
    cout<< (mn == mx ? 0 : max(1, mx - mn - 1)) << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
