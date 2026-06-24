#include <bits/stdc++.h>
using namespace std;

void remove_0s(int* arr, int n){
    int slow=0, count=0;

    for(int fast=0;fast<n;fast++){
        if(arr[fast]!=0){
            arr[slow]=arr[fast];
            slow++;
        }
        else{
            count++;
        }
    }

    for(int i=n-count;i<n;i++){
        arr[i]=0;
    }
}


int main(){


    int nums[] = {0, 1, 0, 3, 12,14,15,0};
    int size = 8;

    remove_0s(nums, size);

    cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    
    return 0;
}