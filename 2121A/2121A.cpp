#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , s;
    cin>> n >> s;

    int x[n];
    for(int i=0;i<n;i++){
        cin>> x[i];
    }

    int ans = min(abs(s-x[0]),abs(s-x[n-1])) + x[n-1] - x[0];

    cout<< ans << endl;

}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
