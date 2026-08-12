#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a;
    cin>> a;

    if(a[0] == '1' && a[1] == '0'){
        if(a.size() == 3){
            if(a[2] != '0' && a[2] != '1')cout<< "YES" << "\n";
            else cout<< "NO" << "\n";
        }else if(a[2] != '0' && a.size()>2){
            cout<< "YES" << "\n";
        }else cout<< "NO" << "\n";
    }else cout<< "NO" << "\n";
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
