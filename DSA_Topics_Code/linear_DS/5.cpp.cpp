#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int remove_dup(int* arr, int n){
    int target=0,j=1;

    for(int i=0;i<n-1;i++){
        target=arr[i];
        if(target==arr[i+1]){
            continue;
        }
        else{
            arr[j]=arr[i+1];
            j++;
        }
    }
    return j;
}


int main(){

    int n=0;
    cout<<" Enter the number of elements : \n";
    cin>>n;

    int* arr = new int[n];

    cout<<" enter the elements of the array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count= remove_dup(arr,n);

    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
    
    delete[] arr;



    return 0;
}