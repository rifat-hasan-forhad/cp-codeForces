#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<long long> a(n), b(n);
    for(int i = 0 ; i < n ; i++){
        cin>> a[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>> b[i];
    }
    
    int x = 0;
    long long need_unit = 0, unit_have = 2e9;
    for(int i = 0 ; i < n ; i++){
        if(a[i] < b[i]){
            x++;
            need_unit = b[i] - a[i];
        }else{
            unit_have = min(unit_have, a[i] - b[i]);
        }
    }
    
    if(x > 1 || need_unit > unit_have){
        cout<< "NO" << endl;
    }else{
        cout<< "YES" << endl;
    }
}

int main() {
	int t;
	cin>> t;
	
	while(t--){
	    solve();
	}
}
