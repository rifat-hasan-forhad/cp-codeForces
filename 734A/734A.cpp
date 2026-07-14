#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>> n;

    string s;
    cin>> s;

    int Danik=0;
    int Anton=0;
    for(int i=0;i<n;i++){
        if(s[i] == 'A'){
            Anton++;
        }else Danik++;
    }

    if(Danik > Anton){
        cout<< "Danik";
    }else if(Danik < Anton){
        cout << "Anton";
    }else cout<< "Friendship";
}
