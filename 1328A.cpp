#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a , b;
    cin>> a >> b;
    
    if(a%b == 0)cout<< a%b << endl;
    else cout<< b - (a%b) << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
