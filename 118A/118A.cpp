#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>> s;

    for(int i=0;i<s.length();i++){
        s[i] = tolower(s[i]);
    }

    for(int i=0;i<s.length();i++){
        if(s[i] == 'e' || s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'){
            s.erase(i,1);
            i--;
        }else{
            s.insert(i,".");
            i++;
        }
    }

    cout<< s;
}
