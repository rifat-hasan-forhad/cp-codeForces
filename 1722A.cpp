#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>> n;
    
    string s;
    cin>> s;
    
    int T = 0 , i = 0 , m = 0 , u = 0 , r = 0;
    for(int j=0;j<n;j++){
        if(s[j] == 'T')T++;
        else if(s[j] == 'm')m++;
        else if(s[j] == 'i')i++;
        else if(s[j] == 'u')u++;
        else if(s[j] == 'r')r++;
    }
    cout<< ((T == 1 && i == 1 && m == 1 && u == 1 && r == 1 && n == 5) ? "YES" : "NO") << "\n";
}
 
int main() {
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}
