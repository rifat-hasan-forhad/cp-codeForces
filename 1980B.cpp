#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , f , k;
    cin>> n >> f >> k;
    
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    int fav = a[f - 1];
    
    sort(a.rbegin(),a.rend());
    
    bool found = false;
    for(int i=0;i<k;i++){
        if(a[i] == fav){
            found = true;
        }
    }
    
    if(k < n && a[k] == fav && a[k - 1] == fav){
        cout<< "MAYBE" << "\n";
        return;
    }
    cout<< (found ? "YES" : "NO") << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
