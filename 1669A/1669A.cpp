#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    int rating[n];
    for(int i=0;i<n;i++){
        cin>> rating[i];

        if(rating[i] <= 1399)cout<< "Division 4"<<endl;
        else if(rating[i] >= 1400 && rating[i] <= 1599)cout<< "Division 3"<<endl;
        else if(rating[i] >= 1600 && rating[i] <= 1899)cout<< "Division 2"<<endl;
        else cout<< "Division 1"<<endl;
    }
}
