#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>> n >> k;

    vector<int> ans;
    for(int i=0;i<n;i++){
        if(k != 0){
            ans.push_back(1);
            k--;
        }else{
            ans.push_back(0);
        }
    }

    for(int i=0;i<n;i++){
        cout<< ans[i];
    }
    cout<< endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
