#include <bits/stdc++.h>
using namespace std;

void rev(int* arr, int n){
    int i=0,j=n-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}

int main(){

    int n=0;
    cout<<" Enter the n : \n";
    cin>>n;
    int* arr =  new int[n];

    cout<<" Enter the elements of the array : \n";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rev(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    

    delete[] arr;
    arr= nullptr;    
    

    return 0;
}