#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;

    int games[n];
    for(int i=0;i<n;i++){
        cin>> games[i];
    }

    if (accumulate(games,games+n, 0) == n) {
        cout << "YES" << "\n";
        return;
    }

    for (int i = 0; i < n - 1; i++) if (!games[i] && !games[i + 1]) {
        cout << "YES" << "\n";
        return;
    }

    cout << "NO" << "\n";
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}

