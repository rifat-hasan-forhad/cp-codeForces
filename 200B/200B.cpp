#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    int drinks[n];
    for(int i=0;i<n;i++){
        cin>> drinks[i];
    }

    float sum=0;
    for(int i=0;i<n;i++){
        sum = sum + drinks[i];
    }

    cout<< sum/n;
}
