#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while(t >= 1){
        int l,r,d,u;
        cin>> l >> r >> d >> u;

        if(l==r && l==d && l==u)cout<< "YES" <<"\n";
        else cout<< "NO" << "\n";
        t--;
    }
}

