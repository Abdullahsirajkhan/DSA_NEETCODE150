#include <bits/stdc++.h>
using namespace std;

int volume(int* arr, int left, int right){

    int res= min(arr[right],arr[left])*(right-left);
    return res;
}

int most_water(int* arr , int n){
    int left=0 , right=n-1, max=0;

    while(left<right){
        if(volume(arr,left,right)>max){
            max=volume(arr,left,right);
        }
        if(arr[left]<arr[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return max;
}

int main(){

    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = 9;

    cout << "Max water container volume: " <<most_water(height, size) << endl; // Expected: 49


    
    return 0;
}