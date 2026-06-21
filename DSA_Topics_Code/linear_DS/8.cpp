#include <iostream>
using namespace std;

bool isPalindrome(int* arr, int size) {
    // Implement the convergent two-pointer logic here
    int left=0,right=size-1;

    while(left<right){
        if(arr[left]!=arr[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int size1 = 5;

    int arr2[] = {1, 2, 3, 4, 2};
    int size2 = 5;

    cout << (isPalindrome(arr1, size1) ? "True" : "False") << endl; // Expected: True
    cout << (isPalindrome(arr2, size2) ? "True" : "False") << endl; // Expected: False

    return 0;
}