#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>> array[i];
    }

    for(int i=0;i<n;i++){
        int a = array[i]/10;
        int b = array[i] - (a*10);
        cout<< a+b << endl;
    }
}
