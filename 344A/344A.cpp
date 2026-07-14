#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>> array[i];
    }

    int count=0;
    for(int i=0;i<n;i++){
        if(array[i] != array[i+1]) count++;
    }
    if(n == 1)cout<< 1;
    else cout<< count;
}
