#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , m;
    string p , q;
    cin>> n >> m >> p >> q;
    
    for(int i = 0 ; i < n ; i++){
        if(p[i] == '#')continue;
        
        for(int j = 0 ; j < m ; j++){
            if(q[j] == '#')continue;
            
            if(p[i] == q[j]){
                p[i] = '#';
                q[j] = '#';
                break;
            }
        }
    }
    
    string ans = "";
    for(auto c : p){
        if(c != '#'){
            ans += c;
        }
    }
    
    bool dominator = true;
    for(auto c : q){
        if(c != '#'){
            dominator = false;
            break;
        }
    }
    
    sort(ans.begin() , ans.end());
    
    cout<< (ans == "isx" && dominator ? "YES" : "NO") << endl;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
