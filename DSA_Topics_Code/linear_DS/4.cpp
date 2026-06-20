#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int remove_element(int* arr, int n, int val){
    int j=0;
    int count=n;
    for(int i=0;i<n;i++){
        if(val==arr[i]){
            count--;
            continue;
        }
        else{
            arr[j]=arr[i];
            j++;
        }
    }
    return count;
}


int main(){

    int n=0,val=0;
    cout<<" Enter the number of elements and the value : \n";
    cin>>n>>val;

    int* arr = new int[n];

    cout<<" enter the elements of the array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    

    int count =remove_element(arr,n,val);

    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
    
    delete[] arr;



    return 0;
}