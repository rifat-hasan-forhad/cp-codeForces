#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,q;
    cin>> n;

    cin>> p;
    int x[p];
    int count=0;
    for(int i=0;i<p;i++){
        cin>> x[i];
    }
    cin>> q;
    int y[q];
    for(int i=0;i<q;i++){
        cin>> y[i];
    }

    int level = n;
    while(level >= 1){
        bool found = false;
        for(int i=0;i<p;i++){
            if(x[i] == level){
                count++;
                found = true;
                break;
            }
        }
        if(!found){
            for(int i=0;i<q;i++){
                if(y[i] == level){
                    count++;
                    break;
                }
            }
        }
    level--;
    }
    if(count == n)cout<< "I become the guy.";
    else cout<< "Oh, my keyboard!";
}
