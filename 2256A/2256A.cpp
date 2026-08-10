#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>> a >> b >> c;

    if(a+b < c){
        c = a+b;
    }else if(a+c < b){
        b = a+c;
    }else if(b+c < a){
        a = b+c;
    }

    int max_val = max({a,b,c});
    int min_val = min({a,b,c});

    cout<< max_val - min_val << endl;

}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
