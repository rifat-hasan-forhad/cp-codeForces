#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;

    int count_0s=0,count_1s=0,count_2s=0,count_3s=0,count_5s=0;
    int position = -1;
    bool found = false;
    for(int i=1;i<=n;i++){
        int number;
        cin>> number;

        if(!found){
            if(number == 0)count_0s++;
            else if(number == 1)count_1s++;
            else if(number == 2)count_2s++;
            else if(number == 3)count_3s++;
            else if(number == 5)count_5s++;

            if(count_0s >= 3 && count_1s >= 1 && count_2s >= 2 && count_3s >= 1 && count_5s >= 1){
                position = i;
                found = true;
            }
        }
    }
    if(position >= 1)cout<< position << "\n";
    else cout<< 0 << "\n";
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
