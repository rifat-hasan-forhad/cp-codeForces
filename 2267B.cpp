#include <bits/stdc++.h>
using namespace std;

int n;
int a[101];
int cnt[101];

void solve() {
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 100; j >= 1; j--) {
            if (cnt[j] >= i) {
                cout << j << ' ';
            }
        }
    }
    cout << '\n';
    
    for (int i = 1; i <= n; i++) {
        cnt[a[i]] = 0;
    }
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}
