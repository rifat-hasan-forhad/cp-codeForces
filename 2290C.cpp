#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<long long> h(n);
    for(int i = 0 ; i < n ; i++){
        cin>> h[i];
    }
    
    sort(h.rbegin(), h.rend());
    
    int k = n;
    for(int i = 2 ; i < n ; i++){
        if(h[i] == h[i - 2])k--;
    }
    
    cout<< k << endl;
    
    deque<long long> ans;
    
    for(int i = 0 ; i < n ; i++){
        if(i %2 == 0)ans.push_back(h[i]);
        else ans.push_front(h[i]);
    }
    
    for(auto i : ans){
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
