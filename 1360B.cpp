#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    
    sort(a,a+n);
    
    int ans = abs(a[0] - a[1]);
    
    for(int i=0;i<n-1;i++){
        if(ans > abs(a[i] - a[i+1])){
            ans = abs(a[i] - a[i+1]);
        }
    }
    cout<< ans << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
