#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , k ;
	string s;
	cin>> n >> k >> s;
	
	char ch = '#';
	int mx = 0;
	int cr = 0;
	
	for(char c : s){
	    if(c == ch){
	        cr++;
	        mx = max(cr , mx);
	    }else{
	        cr = 0;
	    }
	}
	
	cout<< (mx >= k ? "NO" : "YES") << "\n";
}
