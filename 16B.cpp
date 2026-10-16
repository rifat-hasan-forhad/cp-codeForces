#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n;
	int m;
	cin>> n >> m;
	
	long long ans = 0;
	
	vector<long long> a(m);
	vector<int> b(m);
	
	for(int i = 0 ; i < m ; i++){
	    cin>> a[i] >> b[i];
	}
	
	vector<int> sortedB = b;
	sort(sortedB.rbegin(),sortedB.rend());
	
	    for(int i = 0 ; i < m ; i++){
	        if(n <= 0)break;
	        
	        for(int j = 0 ; j < m ; j++){
	            if(sortedB[i] == b[j] && a[j] > 0){
	                
	                long long used = min(n , a[j]);
	                
	                ans += sortedB[i] * used;
	                n -= used;
	                a[j] -= used;
	                break;
	            }
	        }
	    }
	
	cout<< ans << "\n";
}