#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>> a[i];
    }
    
    sort(a.rbegin(), a.rend());
    
    for(auto i : a){
        cout<< i << " ";
    }
    cout<< endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
