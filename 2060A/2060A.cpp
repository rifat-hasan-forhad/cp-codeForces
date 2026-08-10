#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a[5];
    int mx=0;
    for(int i=0;i<5;i++){
        if(i==2){
            continue;
        }
        cin>> a[i];
    }

    a[2] = a[0] + a[1];
    int cnt = 0;
    for(int i=2;i<5;i++){
        if(a[i] == a[i-1] + a[i-2])cnt++;
    }

    mx = max(mx,cnt);

    a[2] = a[3] - a[1];
    cnt = 0;
    for(int i=2;i<5;i++){
        if(a[i] == a[i-1] + a[i-2])cnt++;
    }

    mx = max(mx,cnt);

    a[2] = a[4] - a[3];
    cnt = 0;
    for(int i=2;i<5;i++){
        if(a[i] == a[i-1] + a[i-2])cnt++;
    }

    mx = max(mx,cnt);

    cout<< mx << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
