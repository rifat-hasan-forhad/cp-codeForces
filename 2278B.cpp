
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, z;
    cin >> x >> y >> z;
    
    int n = x + y + z;
        
        if (x == 0 && y == 0 && z == 3) {
            cout << "RPS\n";
        } else if (x == 1 && y == 1 && z == 2) {
            cout << "SPSS\n";
        } else if (z >= x) {
            cout << string(n, 'S') << "\n";
        } else if (y >= z) {
            cout << string(n, 'R') << "\n";
        } else {
            cout << string(n, 'P') << "\n";
        }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
