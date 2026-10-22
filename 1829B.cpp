#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>> a[i];
    }
    
    int cr = 0 , mx = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == 0){
            cr++;
            mx = max(cr , mx);
        }else {
            cr = 0;
        }
    }
    
    cout<< mx << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
