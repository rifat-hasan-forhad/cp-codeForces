#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>> a >> b >> c;

    int ans = (a+b+c)/3;
    if((ans*3 == a+b+c && ans >= a) && (ans*3 == a+b+c && ans >= b))cout<< "YES" << endl;
    else cout<< "NO" << endl;
}

int main(){
    int t ;
    cin>> t;

    while(t--){
        solve();
    }
}

