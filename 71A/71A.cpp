#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
    int n;
    cin>> n;

    string word[n];
    for(int i=0;i<n;i++){
        cin>> word[i];
    }

    for(int i=0;i<n;i++){
        if(word[i].length() <= 10){
            cout<< word[i]<< endl;
        }else{
            int mid = word[i].length()-2;
            cout<< word[i][0] << mid << word[i][word[i].length()-1]<<endl;
        }
    }
}
