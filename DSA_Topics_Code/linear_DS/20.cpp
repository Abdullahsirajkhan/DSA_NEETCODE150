#include <bits/stdc++.h>
using namespace std;

int max_1s(int* arr, int n, int k){
    int max_count=0, left=0, zero_count=0 , count=0;

    for(int right=0;right<n;right++){
        if(!arr[right]){
            zero_count++;
            if(zero_count<=k){
                count++;
            }
        }
        else if(arr[right]){
            count++;
        }

        if(count>max_count){
            max_count=count;
        }

        while(zero_count>k){
            if(!arr[left]){
                zero_count--;
            }
            left++;
            count--;
        }
    }
    return max_count;
}

int main(){

    int nums[] = {1, 0, 0, 1, 1, 0, 1};
    int size = 7;
    int k = 1;

    cout << "Maximum consecutive ones: " << max_1s(nums, size, k) << endl; // Expected: 4

    
    return 0;
}