#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    int nums[n];
    for(int i=0;i<n;i++){
        cin>> nums[i];
    }

    int s=0,d=0;
    int left = 0;
    int right = n-1;
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            if(nums[left] >= nums[right]){
                s = s+nums[left];
                left++;
            }else{
                s = s+nums[right];
                right--;
            }
        }else{
            if(nums[left] >= nums[right]){
                d = d+nums[left];
                left++;
            }else{
                d = d+nums[right];
                right--;
            }
        }
    }
    cout<< s << " " << d << endl;
}
