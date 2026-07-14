#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>> n >> m;

    int array[m];
    for (int i=0;i<m;i++){
        cin>> array[i];
    }

    for(int i=0;i<m-1;i++){
        for(int j=0;j<m-i-1;j++){
            if(array[j] > array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }

    int low_diff=1000;
    int diff;
    for(int i=0;i<=m-n;i++){
        diff = array[i + n - 1] - array[i];
        if (diff < low_diff) {
            low_diff = diff;
        }
    }

    cout<< low_diff;

}
