#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , m;
    cin>> n >> m;
    
    char circle[n][m];
    int cnt = 0 , temp = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> circle[i][j];
            
            if(circle[i][j] == '#'){
                temp++;
            }
        }
        cnt = max(cnt , temp);
        temp = 0;
    }
    
    int row = -1;
    for(int i=0;i<n;i++){
        int temp = 0;
        for(int j=0;j<m;j++){
            if(circle[i][j] == '#'){
                temp++;
            }
        }
        if(temp == cnt){
            row = i;
            break;
        }
    }
    
    int col = -1;
    int x = cnt/2;
    for(int i=0;i<m;i++){
        if(circle[row][i] == '#'){
            col = i + 1 + x;
            break;
        }
    }
    
    cout<< row + 1 << " " << col << "\n";
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
}