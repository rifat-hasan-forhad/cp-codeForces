#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	cin>> n >> s;
	
	string ans(n, ' ');
    int l = 0, r = n - 1;
	
	for (int i = n - 1 ; i >= 0 ; i--) {
	    
	    int remain = n - i;
	    
        if (remain % 2 == 1) {
            ans[r] = s[i];
            r--;
        } else {
            ans[l] = s[i];
            l++;
        }
    }
	
	cout<< ans << endl;
}
