#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;

    int a = 0, b = 0, c = 0, d = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '1')a++;
        else if(s[i] == '2')b++;
        else if(s[i] == '3')c++;
        else d++;
    }

    vector<char> ans;
    if(d == 0){
        cout<< s << endl;
    }else {
        for(int i=0;i<s.size();i++){
            if(i %2 == 0){
                if(a != 0){
                    ans.push_back('1');
                    a--;
                }else if(b != 0){
                    ans.push_back('2');
                    b--;
                }else if(c != 0){
                    ans.push_back('3');
                    c--;
                }
            }else {
                ans.push_back('+');
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<< ans[i];
    }
}
