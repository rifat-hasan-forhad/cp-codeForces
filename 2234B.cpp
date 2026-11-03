#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(long long n){
    string s = to_string(n);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

void solve(){
    long long n;
    cin>> n;
    
    if(n %12 == 0){
        cout<< 0 << " " << n << endl;
        return;
    }
    
    for(long long i = 1 ; i <= n ; i++){
        if(isPalindrome(i) && (n - i) %12 == 0){
            cout<< i << " " << n - i << endl;
            return;
        }
    }
    
    cout<< -1 << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
