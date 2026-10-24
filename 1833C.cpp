#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<long long> a(n);
    
    for(int i = 0 ; i < n ; i++){
        cin>> a[i];
    }
    
    sort(a.begin() , a.end());
    
    if(a[0] %2 == 1){
        cout<< "YES" << endl;
        return;
    }
    
    for(auto u : a){
        if(u %2 == 1){
            cout<< "NO" << endl;
            return;
        }
    }
    
    cout<< "YES" << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
