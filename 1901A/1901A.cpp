#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>> n >> x;

    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }

    int max_dis=a[0];
    for(int i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1]) > max_dis){
            max_dis = abs(a[i] - a[i+1]);
        }
    }
    int b = (x-a[n-1])*2;
    if(b > max_dis)cout<< b << endl;
    else cout<< max_dis << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}

