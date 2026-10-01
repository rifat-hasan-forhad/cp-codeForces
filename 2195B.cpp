#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>> n;
    
    vector<int> a(n + 1 , 0);
    for(int i = 1 ; i <= n ; i++){
        cin>> a[i];
    }
    
    bool changed = true;
    
    while(changed){
        changed = false;
        
        for(int i = 1 ; i <= n/2 ; i++){
            if(a[i] > a[2*i]){
                swap(a[i],a[2*i]);
                changed = true;
            }
        }
    }
    
    cout<< (is_sorted(a.begin() + 1,a.end()) ? "YES" : "NO") << "\n";
}
 
int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}