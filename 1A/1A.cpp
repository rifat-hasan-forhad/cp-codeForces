#include<iostream>
using namespace std;

int main(){
    int m,n,a;
    cin>> m >> n >> a;

    int b;
    if(a > 1 && a%2==0 ){
        b = a/2;
    }else{b=1;}
    int flagstone = (m * n)/(a * b);
    cout<< flagstone;
}
