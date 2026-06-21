#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> sortedSquares(vector<int>& arr1) {
    vector<int> arr2;
    arr2.resize(arr1.size());
    int left=0,right=arr1.size()-1,index=arr1.size()-1;

    while(left<=right){
        if(abs(arr1[left])>abs(arr1[right])){
            arr2[index]=pow(arr1[left],2);
            left++;
        }
        else{
            arr2[index]=pow(arr1[right],2);
            right--;            
        }
        index--;
    }
    return arr2;
}

int main() {
    vector<int> nums = {-8, -2, 0, 8, 10, 12};
    
    vector<int> result = sortedSquares(nums);
    
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}