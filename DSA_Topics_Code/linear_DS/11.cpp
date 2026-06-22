#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int num_count(int* arr, int n, int target){
    int left=0,right=n-1,count=0;
    while(left<right){
        if(arr[left]+arr[right]<target){
            count+=right-left;
            left++;
        }
        else if (arr[left]+arr[right]>=target){
            right--;
        }        
    }
    return count;
}

int main(){

    
    int arr[] = {1, 2, 3, 4, 6, 8};
    int size = 6;
    int target = 7;

    cout << "Valid pairs count: " <<num_count(arr, size, target) << endl; // Expected: 5






    return 0;
}