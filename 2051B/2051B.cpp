#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,a,b,c;
        cin>> n >> a >> b >> c;

        int sum = a + b + c;
        int cycle = n / sum;
        int rem = n-(sum * cycle);

        int day = cycle*3;
        if(rem <= 0){
            cout<< day << endl;
            return;
        }

        rem = rem - a;
        day++;
        if(rem <= 0){
            cout<< day << endl;
            return;
        }

        rem = rem - b;
        day++;
        if(rem <= 0){
            cout<< day << endl;
            return;
        }

        rem = rem - c;
        day++;
        if(rem <= 0){
            cout<< day << endl;
            return;
        }
}

int main(){
    int t;
    cin>> t;

    while(t--){
        solve();
    }
}
