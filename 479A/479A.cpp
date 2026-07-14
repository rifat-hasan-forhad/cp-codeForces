#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>> a >> b >> c;

    int d = a+b+c;
    int w = a+b*c;
    int x = a*(b+c);
    int y = a*b*c;
    int z = (a+b)*c;

    int array[5] = {d,w,x,y,z};

    int max=array[0];
    for(int i=0;i<5;i++){
        if(array[i] > max){
            max= array[i];
        }
    }
    cout<< max;
}
