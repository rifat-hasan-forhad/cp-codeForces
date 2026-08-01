#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while(t--){
        int a,x,y;
        cin >> a >> x >> y;

        if((abs(y-x) < abs(a-x) && abs(y-y) < abs(a-y)) || abs(x-y) < abs(a-y) && abs(x-x) < abs(a-x) )cout<< "YES" << "\n";
        else cout<< "NO" << "\n";
    }
}
