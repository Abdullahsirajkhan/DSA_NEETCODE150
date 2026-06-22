#include <bits/stdc++.h>
using namespace std;

int min_max(int* arr, int n){
    int left=0,right=n-1,Min_max=0;
    while(left<right){
        Min_max=max(Min_max,arr[left]+arr[right]);
        left++;
        right--; 
    }
    return Min_max;
}


int main(){

    int arr[] = {2, 3, 4, 4, 5, 6};
    int size = 6;

    cout << "Minimized Maximum Pair Sum: " << min_max(arr, size) << endl; // Expected: 8
    
    return 0;
}