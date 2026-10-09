#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>> s;
	
	int n = s.size();
	
	sort(s.begin(), s.end());
	
	int ans = 0;
	for(int i = 1 ; i < n ; i++){
	    if(s[i - 1] == s[i])continue;
	    else ans++;
	}
	
	cout<< (ans %2 != 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << "\n";
}
