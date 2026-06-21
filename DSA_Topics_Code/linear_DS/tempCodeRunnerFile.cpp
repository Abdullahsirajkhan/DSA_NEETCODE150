#include <iostream>
using namespace std;

void rev(int* arr, int size) {
    // Implement the convergent two-pointer logic here
    int left=0,right=size-1;

    while(left<right){
        swap(arr[left],arr[right]);        
        left++;
        right--;
    }
}

int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int size1 = 5;

    int arr2[] = {1, 2, 3, 4, 2};
    int size2 = 5;

    rev(arr1,5);
    rev(arr2,5);

    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    


    return 0;
}