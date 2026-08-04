#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    string s;
    cin>> s;

    int count_1s = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '0')count_1s++;
        else count_1s = count_1s + n-1;
    }
    cout<< count_1s << "\n";
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
