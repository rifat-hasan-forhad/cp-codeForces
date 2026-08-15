#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a , b;
    cin>> a >> b;

    b = (b % 2)*2;

    int dif = abs(a-b);

    if((a>0 && dif%2 == 0) || (a==0 && b==0))cout<< "YES" << endl;
    else cout<< "NO" << endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}

