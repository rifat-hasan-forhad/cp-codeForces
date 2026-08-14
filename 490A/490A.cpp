#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    vector<int> m , p , s;
    for(int i=0;i<n;i++){
        int a;
        cin>> a;

        if(a == 1){
            m.push_back(i+1);
        }
        else if(a == 2){
            p.push_back(i+1);
        }
        else {
            s.push_back(i+1);
        }
    }

    int w = min({m.size() ,p.size() ,s.size()});
    cout<< w << endl;

    for(int i=0;i<w;i++){
        cout<< m[i] << " " << p[i] << " " << s[i] << endl;
    }
}
