#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;

    string s;
    cin>> s;

    int l = 0 , r = n - 1 , ans = n;
    while(s[l] != s[r] && ans > 0){
        l++;
        r--;
        ans = ans - 2;
    }
    cout<< ans << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}

