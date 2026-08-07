#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;

    int a[n];
    int count_0s=0,count_neg=0;
    for(int i=0;i<n;i++){
        cin >> a[i];

        if(a[i] == 0)count_0s++;
        else if(a[i] < 0)count_neg++;
    }

    if(count_neg %2 != 0){
        cout<< 2+count_0s << endl;
    }else cout<< count_0s << endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}


