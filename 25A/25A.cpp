#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    int array[n];
    int even=0;
    int odd=0;
    for(int i=1;i<=n;i++){
        cin>> array[i];

        if(array[i]%2==0){
            even++;
        }else {odd++;}
    }

    if(even > odd){
        for(int i=1;i<=n;i++){
            if(array[i]%2 != 0){
                cout<< i;
            }
        }
    }else{
        for(int i=1;i<=n;i++){
            if(array[i]%2 == 0){
                cout<< i;
            }
        }
    }
}
