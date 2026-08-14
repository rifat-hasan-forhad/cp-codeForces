#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }

    int b[n];
    for(int i=0;i<n;i++){
        cin>> b[i];
    }

    int result[n];
    for(int i=0;i<n;i++){
        result[i] = a[i] - b[i];
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        if(result[i] >= 0){
            sum = sum + result[i];
        }
    }
    cout<< sum+1 << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
