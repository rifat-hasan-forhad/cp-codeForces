#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    
    int even = 0, odd = 0;
    for(int i=0;i<n;i++){
        if(a[i] % 2 != i % 2){
            if(i % 2 == 0)even++;
            else odd++;
        }
    }
    cout<< (even != odd ? -1 : even) << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
