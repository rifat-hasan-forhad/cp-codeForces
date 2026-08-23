#include <bits/stdc++.h>
using namespace std;

int main() {
	string s , need = "hello";
	cin>> s;
	
	int j = 0;
	for(int i=0;i<s.size();i++){
	    if(s[i] == need[j])j++;
	}
	
	if(j == 5)cout<< "YES" << endl;
	else cout<< "NO" << endl;
}
