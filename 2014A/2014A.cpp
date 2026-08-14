#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin>> n >> k;

    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }

    int gold = 0, people = 0;
    for(int i=0;i<n;i++){
        if(a[i] >= k){
            gold = gold + a[i];
        }else if(a[i] == 0 && gold > 0){
            gold = gold - 1;
            people++;
        }
    }
    cout<< people << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}


