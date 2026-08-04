#include<bits/stdc++.h>
using namespace std;

void solve(){
    int array[3];
    cin>> array[0] >> array[1] >> array[2];

    sort(array,array+3);

    if(array[0] == array[1] || array[1] == array[2])cout<< 0 << "\n";
    else{
        cout<< min(array[1] - array[0], array[2] - array[1]) << "\n";
    }
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
