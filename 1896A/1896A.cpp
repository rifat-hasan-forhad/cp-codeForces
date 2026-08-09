#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;

    int a[n];
    bool found =false;
    for(int i=0;i<n;i++){
        cin>> a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i] < a[0]){
            found = true;
            break;
        }
    }

    if(found)cout<< "NO" << endl;
    else cout<< "YES" << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
