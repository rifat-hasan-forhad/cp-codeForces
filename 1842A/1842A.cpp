#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>> n >> m;

    int a[n];
    long long tsondu=0;
    for(int i=0;i<n;i++){
        cin>> a[i];

        tsondu = tsondu + a[i];
    }

    int b[m];
    long long tenzing=0;
    for(int i=0;i<m;i++){
        cin>> b[i];

        tenzing = tenzing + b[i];
    }

    if(tsondu < tenzing)cout<< "Tenzing" << endl;
    if(tsondu > tenzing)cout << "Tsondu" << endl;
    if(tsondu == tenzing) cout<< "Draw" << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
