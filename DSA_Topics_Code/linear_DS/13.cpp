#include <bits/stdc++.h>
using namespace std;

int num_of_boat(int* arr, int n, int limit){
    int left=0, right=n-1, boats=0;
    while(left<right){
        if(arr[left]+arr[right]<=limit){
            boats++;
            left++;
            right--;
        }
        else if(arr[left]+arr[right]>limit){
            if(arr[right]>limit){
                right--; // If you have worked on your fitness, you could have been saved!.
            }
            else{
                boats++;
                right--;
            }
        }                
    }
    if(left==right){
            boats++;
        }

    return boats;
}

int main(){
    
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    int limit = 6;

    cout << "Minimum boats required: " << num_of_boat(arr, size, limit) << endl; // Expected: 3


    return 0;
}