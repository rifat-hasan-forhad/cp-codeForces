#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<int> a(n);
    int mx = 0;
    
    for(int i = 0 ; i < n ; i++){
        cin>> a[i];
        
        if(a[i] > mx){
            mx = a[i];
        }
    }
    
    cout<< mx * n << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
