#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string s;
    cin>> s;

    int low=0;
    int up=0;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            up++;
        }else{
            low++;
        }
    }

    for(int i=0;i<s.length();i++){
        if(up < low){
            s[i] = tolower(s[i]);
        }else if(up == low){
            s[i] = tolower(s[i]);
        }else{
            s[i] = toupper(s[i]);
        }
    }

    cout<< s;
}
