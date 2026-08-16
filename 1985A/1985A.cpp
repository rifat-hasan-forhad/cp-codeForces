#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a, b;
    cin>> a >> b;

    string temp = {a[0]};
    a[0] = b[0];
    b[0] = temp[0];

    cout<< a <<" " << b << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}

