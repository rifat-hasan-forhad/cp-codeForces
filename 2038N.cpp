#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x , y;
    char c;
    cin>> x >> c >> y;
    
    if(c == '<'){
        if(x < y)cout<< x << "<" << y << "\n";
        else if(x > y) cout<< x << ">" << y << "\n";
        else cout<< x << "=" << y << "\n";
    }
    else if(c == '>'){
        if(x > y)cout<< x << ">" << y << "\n";
        else if(x < y) cout<< x << "<" << y << "\n";
        else cout<< x << "=" << y << "\n";
    }
    else if(c == '='){
        if(x == y)cout<< x << "=" << y << "\n";
        else if(x < y)cout<< x << "<" << y << "\n";
        else cout<< x << ">" << y << "\n";
    }
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
