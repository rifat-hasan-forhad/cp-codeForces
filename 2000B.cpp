#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<int> a(n);
    for(auto &i : a){
        cin>> i;
    }
    
    int l = a[0] , r = a[0];
    for(int i = 1 ; i < n; i++){
        if(a[i] + 1 == l){
            l = a[i];
        }else if(a[i] - 1 == r){
            r = a[i];
        }else{
            cout<< "NO" << endl;
            return;
        }
    }
    
    cout<< "YES" << endl;
}

int main() {
	int t ;
	cin>> t;
	while(t--){
	    solve();
	}
}