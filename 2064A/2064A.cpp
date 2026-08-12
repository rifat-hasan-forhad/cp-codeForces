#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;

    string s;
    cin>> s;

    int operation = 0;
    for(int i=0;i<n-1;i++){
        if(s[i] != s[i+1]){
            operation++;
        }
    }

    if(s[0] == '1')operation++;
    cout<< operation << "\n";
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}

