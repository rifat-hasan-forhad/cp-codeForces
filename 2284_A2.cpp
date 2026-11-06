#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>> n;
    
    vector<long long> a(n);
    
    for(int i = 0 ; i < n ; i++){
        
        int x;
        cin>> x;
        
        a[i] = 1LL << x;
    }
    
    sort(a.rbegin() , a.rend());
    
    long long p = 0 , q = 0;
    
    for(int i = 0 ; i < n ; i++){
        
        if(p <= q){
            p += a[i];
        }else{
            q += a[i];
        }
    }
    
    cout<< p * q << endl;
}
 
int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}