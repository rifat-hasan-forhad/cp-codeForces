#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<int> a(n);
    
    for(int i = 0 ; i < n ; i++){
        cin>> a[i];
    }
    
    for(int i = 0 ; i < n - 1 ; i++){
        if(abs(a[i] - a[i + 1]) == 1 && a[i] > a[i + 1]){
            swap(a[i] , a[i + 1]);
        }
    }
    
    cout<< (is_sorted(a.begin() , a.end()) ? "YES" : "NO") << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
