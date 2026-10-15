#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , m;
    cin>> n >> m;
    
    int sum = 0;
    int cnt = 0;
    int mn = 1e9;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            int val;
            cin>> val;
            
            if(val < 0)cnt++;
            
            sum += abs(val);
            
            mn = min(mn , abs(val));
        }
    }
    
    if(cnt %2 != 0)sum -= 2 * mn;
    
    cout<< sum << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
