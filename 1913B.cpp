#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>> s;
    
    int n = s.size();
    
    int cnt_0 = 0, cnt_1 = 0;
    
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '1')cnt_1++;
        else cnt_0++;
    }
    
    if(cnt_0 == cnt_1){
        cout<< 0 << endl;
        return;
    }
    
    string t = "";
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '1' && cnt_0 > 0){
            t += '0';
            cnt_0--;
        }else if(s[i] == '0' && cnt_1 > 0){
            t += '1';
            cnt_1--;
        }else{
            break;
        }
    }
    
    cout<< n - t.size() << endl;
}

int main() {
	int t;
	cin>> t;
	
	while(t--){
	    solve();
	}
}
