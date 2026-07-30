#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    while(n >= 1){
        string s;
        cin>> s;

        for(int i=0;i<s.size();i++){
            if(s[s.size()-2] == 'u' && s[s.size()-1] == 's'){
                s.erase(s.size()-2,1);
                s.erase(s.size()-1,1);
                i-2;
                s.push_back('i');
                cout<< s<< "\n";
                break;
            }
        }
        n--;
    }
}
