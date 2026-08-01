#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while(t--){
        string x;
        cin>> x;

        int array[x.size()];
        for(int i=0;i<x.size();i++){
            array[i] = x[i] - '0';
        }

        int minimum = array[0];
        for(int i=0;i<x.size();i++){
            if(array[i] < minimum)minimum = array[i];
        }
        cout<< minimum << "\n";
    }
}
