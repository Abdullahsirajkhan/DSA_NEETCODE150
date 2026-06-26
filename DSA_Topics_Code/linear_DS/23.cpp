#include <bits/stdc++.h>
using namespace std;

int pivotIndex(int* arr, int n){
    if(n==1){
        return 0;
    }

    int* arr2 = new int[n];
    arr2[0]=arr[0];
    for(int i=1;i<n;i++){
        arr2[i]=arr2[i-1]+arr[i];
    }

    for(int i=1;i<n;i++){
        if(arr2[i-1]==arr2[n-1]-arr2[i]){
            return i;
        }
    }

    delete[] arr2;

    return -1;
}

int main(){
    
    int nums[] = {1,9,3,5,4,4,5};
    int size = 7;

    cout << "Pivot Index: " << pivotIndex(nums, size) << endl;

    return 0;
}