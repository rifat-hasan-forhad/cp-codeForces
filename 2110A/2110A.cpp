#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }

    sort(a,a+n);

    if (a[0] % 2 == a[n - 1] % 2) {
        cout << 0 << endl;
        return;
    }

    int l = 0;
    while(l < n && a[l]%2 == a[0]%2){
        l++;
    }

    int r = 0;
    while(r < n && a[n - 1 - r]%2 == a[n - 1]%2){
        r++;
    }

    cout<< min(l,r) << endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}


