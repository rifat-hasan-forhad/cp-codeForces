#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    int a[n];
    int even = 0, odd = 0;
    for(int i=0;i<n;i++){
        cin>> a[i];
        
        if(a[i] %2 == 0)even++;
        else odd++;
    }
    
    if(odd > 0 && even > 0)sort(a,a+n);
    
    for(int i=0;i<n;i++){
        cout<< a[i] << " ";
    }
    cout<< "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
