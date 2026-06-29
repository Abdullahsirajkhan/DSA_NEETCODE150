#include <bits/stdc++.h>
using namespace std;

int min_length(int* arr , int n, int target){
    int left=0, sum=0, Min=INT32_MAX;

    for(int right=0;right<n;right++){
        sum+=arr[right];

        while(sum>=target){
            Min=min(Min,right-left+1);
            sum-=arr[left];
            left++;
        }
    }
    return Min==INT32_MAX ? 0 : Min;
}

int main(){
    
    int nums[] = {6, 3, 1, 5, 4, 3};
    int size = 6;
    int target = 91;

    cout << "Minimum Subarray Length: " << min_length(nums, size , target) << endl; // Expected: 2
    

    return 0;
}