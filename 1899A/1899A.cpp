#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    int n[t];
    for(int i=0;i<t;i++){
        cin>> n[i];
    }

    for(int i=0;i<t;i++){
        if(n[i]%3==0)cout<< "Second"<<endl;
        else cout<< "First"<<endl;
    }
}
