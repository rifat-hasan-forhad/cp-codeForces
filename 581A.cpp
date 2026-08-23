#include <bits/stdc++.h>
using namespace std;

int main() {
	int a , b;
	cin>> a >> b;
	
	int days = min(a,b);
	int remain = max(a,b) - days;
	
	cout<< days << " " << remain/2 << endl;
}
