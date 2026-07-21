#include<bits/stdc++.h>
using namespace std;

int main(){
    string s_1,s_2,s_ans = "";
    cin>> s_1 >> s_2;

    for(int i=0;i<s_1.size();i++){
        if(s_1[i] == '1' && s_2[i] == '1'){
            s_ans += '0';
        }else if(s_1[i] == '1' || s_2[i] == '1'){
            s_ans += '1';
        }else{
            s_ans += '0';
        }
    }
    cout<< s_ans;
}
