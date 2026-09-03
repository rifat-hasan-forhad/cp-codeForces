#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n , k , w;
    cin>> n >> k >> w;
    
    long long needMoney = 0;
    for(int i=1;i<=w;i++){
        needMoney += i * n;
    }
    
    long long ans = needMoney - k;
    cout<< (ans > 0 ? ans : 0) << "\n";
}
