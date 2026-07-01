#include <bits/stdc++.h>
using namespace std;

int maj_count(int* arr, int n ){
    int count=0, candidate=0;

    for(int i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
        }
        if(arr[i]==candidate){
            count++;
        }
        else if(arr[i]!=candidate){
            count--;
        }
    }
    return count<=0 ? -1 : candidate; 
}


int main(){

    int nums[] = {2, 2,3,3,3,3,3, 1, 1, 1, 2, 2};
    int size = 12;

    cout << "Majority Element: " <<maj_count(nums, size) << endl; // Expected: 2
    
    return 0;
}