#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    string ans = "";
    
    char a[8][8];
    for(int i = 0 ; i < 8 ; i++){
        for(int j = 0 ; j < 8 ; j++){
            cin>> a[i][j];
            
            if(a[i][j] != '.'){
                ans.push_back(a[i][j]);
            }
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
