#include<bits/stdc++.h>
using namespace std;

int main(){
    string fault,s;
    cin>> fault >> s;

    string keys = {"qwertyuiopasdfghjkl;zxcvbnm,./"};

    if(fault[0] == 'R'){
        for(int i=0;i<s.size();i++){
            for(int j=0;j<keys.size();j++){
                if(s[i] == keys[j] && fault[0] == 'R'){
                    s[i] = keys[j-1];
                    break;
                }
            }
        }
    }else{
        for(int i=0;i<s.size();i++){
            for(int j=0;j<keys.size();j++){
                if(s[i] == keys[j] && fault[0] == 'L'){
                    s[i] = keys[j+1];
                    break;
                }
            }
        }
    }
    cout<< s << endl;
}
