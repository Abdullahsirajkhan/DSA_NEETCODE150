#include <bits/stdc++.h>
using namespace std;

int min_max(int* arr, int n, int target){
    int left=0 , min_length=INT32_MAX, sum=0;

    for(int right=0;right<n;right++){
        sum+=arr[right];
        
        while(sum>=target){
            min_length=min(min_length,right-left+1);
            sum-=arr[left];
            left++;
        }
    }
    return (min_length==INT32_MAX) ?  0 : min_length;
}


int main(){

    int nums[] = {2, 3, 1, 2, 4, 3};
    int size = 6;
    int target = 7;

    cout << "Minimum window length: " <<min_max(nums, size , target) << endl; // Expected: 2

    
    return 0;
}