#include <iostream>
using namespace std;

bool isMountainArray(int* arr, int size) {
    int left=0,right=size-1;
    while(left<=right){
        if(arr[left]<arr[left+1]){
            left++;
        }
        if(arr[right]<arr[right-1]){
            right--;
        }
    }
    return left==right? true:false;
}

int main() {
    int arr1[] = {1, 3, 5, 4, 2};
    int size1 = 5;

    int arr2[] = {3, 4, 5, 6};
    int size2 = 4;

    cout << (isMountainArray(arr1, size1) ? "True" : "False") << endl; // Expected: True
    cout << (isMountainArray(arr2, size2) ? "True" : "False") << endl; // Expected: False

    return 0;
}