#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, q;
    cin>> n >> k >> q;
    
    vector<long long> a(n);
    int cnt = 0;
    
    for(int i = 0 ; i < n ; i++){
        cin>> a[i];
        
        if(a[i] > q)cnt++;
    }
    
    if(n == cnt || n - cnt < k){
        cout<< 0 << endl;
        return;
    }
    
    vector<long long> temp;
    for(int i = 0 ; i < n ; i++){
        if(a[i] <= q){
            temp.push_back(i + 1);
        }
    }
    
    long long ans = 0, streak = 1;
    if(streak >= k){
        ans += streak - k + 1;
    }
    
    for(int i = 1 ; i < temp.size() ; i++){
        if(temp[i] - temp[i - 1] == 1){
            streak++;
        } else {
            streak = 1;
        }
        
        if(streak >= k){
            ans += (streak - k + 1);
        }
    }
    
    cout<< ans << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
