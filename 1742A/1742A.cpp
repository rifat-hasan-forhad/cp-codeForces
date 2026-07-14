#include<iostream>
using namespace std;

int main(){
    int t;
    cin>> t;

    int a[t],b[t],c[t];
    for(int i=0;i<t;i++){
        cin>> a[i] >> b[i] >> c[i];
    }

    for(int i=0;i<t;i++){
        if(a[i]+b[i] == c[i] || a[i]+c[i] == b[i] || c[i]+b[i] == a[i]){
            cout<< "YES"<< endl;
        }else{
            cout<< "NO"<< endl;
        }
    }

}
