#include <iostream>
using namespace std;

int removeDuplicates(int* nums, int size) {
    // Implement your in-place fast and slow pointer logic 
    int slow=1, fast=0;

    for(int i=0;i<size-1;i++){
        if(nums[fast]==nums[fast+1]){
            fast++;
        }
        else if(nums[fast]!=nums[fast+1]){
            nums[slow]=nums[fast+1];
            fast++;     
            slow++;       
        }
    }
    return slow;
}

int main() {
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int size = 10;

    int unique_count = removeDuplicates(nums, size);
    
    cout << "Number of unique elements: " << unique_count << endl; // Expected: 5
    cout << "Modified array up to unique count: ";
    for(int i = 0; i < unique_count; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}