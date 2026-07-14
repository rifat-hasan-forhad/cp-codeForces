#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>> n >> k >> l >> c >> d >> p >> nl >> np;

    int drinks = k * l;
    int total_drinks = drinks/nl;

    int total_slices = c * d;

    int total_salts = p/np;

    if(total_drinks < total_slices && total_drinks < total_salts){
        cout<< total_drinks/n;
    }else if(total_slices < total_drinks && total_slices < total_salts){
        cout<< total_slices/n;
    }else cout<< total_salts/n;
}
