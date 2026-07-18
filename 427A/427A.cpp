#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>> array[i];
    }

    int crime_before=0;
    int crime_after=0;
    int police=0;
    for(int i=0;i<n;i++){
        if(array[i] < 0 && police == 0){
            crime_before++;
        }else if(array[i] < 0 && police > 0){
            crime_after++;
            police = police - 1;
            crime_after = crime_after - 1;
        }else{
            police = police + array[i];
        }
    }
    cout<< crime_before + crime_after;
}
