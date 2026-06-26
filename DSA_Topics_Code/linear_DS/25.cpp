#include <bits/stdc++.h>
using namespace std;

int max_count(int* arr, int n){
    int count=0,Max=INT32_MIN,ones=0,zeros=0;

    for(int i=0;i<n;i++){
        count+=arr[i];
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]==0){
            zeros++;
        }
        else{
            ones++;
        }
        Max=max(Max,(count+zeros)-ones);
    }
    return Max; 
}

int main(){
    
    int nums[] = {0, 1, 1, 1, 0, 1};
    int size = 6;

    cout << "Maximum Split Score: " <<max_count(nums, size) << endl; // Expected: 5

    return 0;
}