#include <bits/stdc++.h>
using namespace std;

void solve(){
    int hh , mm;
    char c;
    cin>> hh >> c >> mm;
    string unit = (hh >= 12 ? "PM" : "AM");
    
    if (hh > 12)hh = hh - 12;
    if (hh == 0)hh = 12;
    
    cout<< (hh < 10 ? "0" : "") << hh << c << (mm < 10 ? "0" : "") << mm << " " << unit << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}

