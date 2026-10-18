#include <bits/stdc++.h>
using namespace std;

int main() {
	string a , b , s;
	cin>> a >> b >> s;
	
	string ans = "";
	
	for(int i = 0 ; i < s.size() ; i++){
	    
	    if(!isalpha(s[i])){
	        ans.push_back(s[i]);
	        continue;
	    }
	    
	    bool found = false;
	    
	    for(int j = 0 ; j < 26 ; j++){
	        if(tolower(s[i]) == a[j]){
	            
	            if(isupper(s[i])){
	                ans.push_back(toupper(b[j]));
	            }else{
	                ans.push_back(b[j]);
	            }
	            
	            found = true;
	            break;
	        }
	    }
	    
	    if(!found){
	        ans.push_back(s[i]);
	    }
	    
	}
	
	cout<< ans << "\n";
}
