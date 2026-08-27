#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , m;
	cin>> n >> m;
	
	int a[n];
	vector<int> earn;
	for(int i=0;i<n;i++){
	    cin>> a[i];
	    
	    if(a[i] < 0){
	        earn.push_back(a[i]);
	    }
	}
	
	sort(earn.begin(),earn.end());
	
	int ans = 0;
	for(int i=0;i<earn.size();i++){
	    if(i <= m-1){
	        ans += earn[i]*(-1);
	    }
	}
	cout<< ans << "\n";
}
