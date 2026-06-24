#include <bits/stdc++.h>
using namespace std;

int remove_duplicate2(int* arr, int n){
    int slow=2;

    for(int fast=2;fast<n;fast++){
        if(arr[fast]!=arr[slow-2]){
            arr[slow]=arr[fast];
            slow++;
        }
    }
    return slow;
}


int main(){

    int nums[] = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    int size = 9;

    int final_count = remove_duplicate2(nums, size);

    cout << "Number of elements remaining: " << final_count << endl; // Expected: 7
    cout << "Modified array up to final count: ";
    for (int i = 0; i < final_count; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;


    
    return 0;
}