#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin>> n >> k;
    
    vector<long long> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>> a[i];
    }
    
    sort(a.rbegin() , a.rend());
    
    int cnt = count(a.begin(), a.end(), a[0]);
    if(k < cnt){
        cout<< "NO" << endl;
        return;
    }
    
    reverse(a.begin(), a.begin() + k);
    cout<< "YES" << endl;
    
    for(int i = 0 ; i < n ; i++){
        cout<< a[i] << " ";
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
