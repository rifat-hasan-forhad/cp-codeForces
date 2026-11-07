#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    vector<int> ans;
    
    while(n--){
        string s;
        cin>> s;
        
        for(int i = 0 ; i < 4 ; i++){
            if(s[i] == '#'){
                ans.push_back(i + 1);
            }
        }
    }
    
    reverse(ans.begin(), ans.end());
    
    for(int i = 0 ; i < ans.size() ; i++){
        cout<< ans[i] << " ";
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
