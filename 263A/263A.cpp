#include<bits/stdc++.h>
using namespace std;

int main(){
    int matrix[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>> matrix[i][j];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(matrix[i][j] == 1){
                int a = abs(i-2);
                int b = abs(j-2);

                cout<< a+b << endl;
            }
        }
    }
}
