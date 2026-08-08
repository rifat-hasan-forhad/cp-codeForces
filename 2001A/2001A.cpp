#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }

    int freq = 1;
    for(int i=0;i<n;i++){
        int b =0;
        for(int j=0;j<n;j++){
            if(a[i] == a[j])b++;
        }
        if(b > freq)freq = b;
    }
    cout<< n-freq << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
