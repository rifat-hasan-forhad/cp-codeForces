#include<iostream>
#include<string>
#include <cctype>
using namespace std;

int main(){
    string content;
    cin>> content;

    cout<< (char)toupper(content[0]);
    for(int i=1;i<content.length();i++){
        cout<< content[i];
    }
}
