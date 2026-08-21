#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    string s;
    cin>> s;
    
    sort(s.begin(),s.end());
    
    int dlt = 0;
    for(int i=0;i<n;i++){
        if(s[i] == s[i+1]){
            dlt++;
        }
    }
    cout<< (n*2)-dlt << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
