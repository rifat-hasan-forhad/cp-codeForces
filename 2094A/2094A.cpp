#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s1 , s2 , s3;
    cin>> s1 >> s2 >> s3;

    string s;
    s.push_back(s1[0]);
    s.push_back(s2[0]);
    s.push_back(s3[0]);

    cout<< s << "\n";
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
