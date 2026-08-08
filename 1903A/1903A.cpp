#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>> n >> k;

    int a[n];
    int elem=0;
    bool all_same = true;
    for(int i=0;i<n;i++){
        cin>> a[i];

        if(a[i] != a[0]){
            all_same = false;
        }
    }

    for(int i=0;i<n-1;i++){
        if(a[i] >= a[i+1]){
            elem++;
        }
    }

    if(k >= 2 || elem == 0 || all_same)cout<< "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
