#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b;
    cin>> n >> a >> b;

    int distance = abs(a-b);
    if(distance %2 == 0)cout<< "YES" << "\n";
    else cout << "NO" << "\n";

}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
