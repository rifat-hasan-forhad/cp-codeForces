#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;

    string s;
    cin>> s;

    bool type_2 = false;
    int dot_count = 0;
    for(int i=0;i<=n;i++){
        if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
            type_2 = true;
        }else if(s[i] == '.'){
            dot_count++;
        }
    }
    if(type_2)cout<< 2 << endl;
    else cout<< dot_count << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
