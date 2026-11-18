#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>> a[i];
    }
    
    for(int i = 0 ; i < n ; i++){
        if(a[i] == -1){
            a[i] = 1;
        }
        
        if(a[i] == 1)break;
    }
    
    for(int i = n - 1 ; i >= 0 ; i--){
        if(a[i] == -1){
            a[i] = 1;
        }
        
        if(a[i] == 1)break;
    }
    
    for(int i = 0 ; i < n ; i++){
        if(a[i] == -1){
            a[i] = 0;
        }
    }
    
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
