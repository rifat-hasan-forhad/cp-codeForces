#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a , b , c;
    cin>> a >> b >> c;
    
    if(abs(a - b) == 1 && abs(b - c) == 1){
        cout<< "YES" << endl;
    }else cout<< "NO" << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
