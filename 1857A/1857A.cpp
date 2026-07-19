#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>> n;

        int array[n];
        for(int i=0;i<n;i++){
            cin>> array[i];
        }

        int sum=0;
        for(int i=1;i<n;i++){
            sum = sum + array[i];
        }

        for(int i=0;i<n;i++){
            if(n == 2){
                if((array[0]%2==0 && array[1]%2==0) || (array[0]%2!=0 && array[1]%2!=0))
                    {cout<< "YES"<<endl;
                    break;
                }
                else
                    {cout<< "NO"<<endl;
                        break;
                }
            }else{
                if((array[0]%2==0 && sum%2==0) || (array[0]%2!=0 && sum%2!=0))
                    {cout<< "YES"<<endl;
                    break;
                }
                else
                    {cout<< "NO"<<endl;
                    break;
                }
            }
        }
    }
}
