#include <bits/stdc++.h>
using namespace std;

int min_pos(int* arr, int n){
    int min_value=1, sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<1){
            min_value=max(min_value,abs(sum)+1);
        }
    }

    return min_value;
}


int main(){

    int nums[] = {1,2,3,4,5,6};
    int size = 5;

    cout << "Minimum Start Value: " <<min_pos(nums, size) << endl; // Expected: 5

    
    return 0;
}