#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin>> n >> k;

    long long operation=0;

    if (n%2 != 0){
        operation = operation + 1;
        n = n - k;
    }

    if (n>0){
        operation = operation + (n + k - 2) / (k - 1);
    }
    cout<< operation << "\n";
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
