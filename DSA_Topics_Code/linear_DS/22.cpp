#include <bits/stdc++.h>
using namespace std;

int max_unique(int* arr, int n){
    int left=0, Max=INT32_MIN;

    for(int right=0;right<n-1;right++){

        Max=max(Max,right-left+1);
        
        while(arr[right]==arr[right+1]&&left!=right+1){
            left++;            
        }
    }
    return Max;
}


int main(){
    
    int nums[] = {1, 2, 3, 3, 4, 5};
    int size = 6;

    cout << "Longest unique subarray length: " <<max_unique(nums, size) << endl; // Expected: 3

    return 0;
}