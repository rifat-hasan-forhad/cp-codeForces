#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while(t >= 1){
        int n;
        cin>> n;

        int value = sqrt(n);
        if(value * value == n)cout<< 0 << " " << value << "\n";
        else cout<< -1 << "\n";
        t--;
    }
}
