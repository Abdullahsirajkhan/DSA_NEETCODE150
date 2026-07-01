#include <bits/stdc++.h>
using namespace std;

void re_order(int* arr, int n, int target){
    int low=0, mid=0, hi=n-1;

    while(mid<=hi){
        if(arr[mid]<target){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==target){
            mid++;
        }
        else if(arr[mid]>target){
            swap(arr[hi],arr[mid]);
            hi--;
        }
    } 
}

void printArray(int* arr, int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
}


int main(){

    int nums[] = {9, 4, 6, 3, 7, 3, 8};
    int size = 7;
    int pivot = 6;

    re_order(nums, size, pivot);
    printArray(nums, size);
    
    return 0;
}