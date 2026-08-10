#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long x,y,a,b;
    cin>> x >> y >> a >> b;

    long long half=0,full=0;
    if(x<y){
        half = b * x;
        full = a * (y-x);
    }else if(x>y) {
        half = b * y;
        full = a * (x-y);
    }else if(x == y){
        half = 0;
        full = x*b;
    }

    if(half+full < (x*a)+(y*a)){
        cout<< half+full << endl;
    }else cout<< (x*a)+(y*a) << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
