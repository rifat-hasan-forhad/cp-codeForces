#include <bits/stdc++.h>
using namespace std;

void solve(){
    string n;
    cin>> n;
    
    int sum1 = 0;
    for(int i=0;i<3;i++){
        sum1 = sum1 + (n[i] - '0');
    }
    
    int sum2 = 0;
    for(int i=3;i<6;i++){
        sum2 = sum2 + (n[i] - '0');
    }
    
    if(sum1 == sum2)cout<< "YES" << endl;
    else cout<< "NO" << endl;
}

int main() {
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}
