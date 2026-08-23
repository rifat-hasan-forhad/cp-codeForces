#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    
    sort(a.begin(),a.end());
    
    bool ans = true;
    for(int i=0;i<n-1;i++){
        if(a[i+1] - a[i] > 1){
            ans = false;
            break;
        }
    }
    
    if(ans)cout<< "YES" << endl;
    else cout<< "NO" << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
