#include <bits/stdc++.h>
using namespace std;

int max_sum(int* arr, int n, int k){
    
    int Max=0, sum=0;
    
    for(int i=0;i<n;i++){
        if(i<k){
            sum+=arr[i];         
            Max=sum;
        }
        else{
            sum += arr[i] - arr[i-k];
            Max=max(sum,Max);

        }
    }
    return Max;
}


int main(){

    int nums[] = {2, 1, 5, 1, 6, 2};
    int size = 6;
    int k = 3;

    cout << "Maximum sum of a subarray of size " << k << " is: " << max_sum(nums, size, k) << endl; // Expected: 9
    
    return 0;
}