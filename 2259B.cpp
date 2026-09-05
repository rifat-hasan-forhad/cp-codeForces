#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    
    long long a[n];
    int type_1 = 0, type_2 = 0, type_3 = 0;
    for(int i=0;i<n;i++){
        cin>> a[i];
        
        if(a[i] % 2 != 0)type_1++;
        else if(a[i] % 4 == 0)type_2++;
        else type_3++;
    }
    
    cout<< max({type_1,type_2,type_3}) << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
