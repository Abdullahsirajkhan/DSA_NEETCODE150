#include <iostream>
#include <bits/stdc++.h>
using namespace std;


pair<int,int> two_sum(int* arr, int n, int target){
    int start=1,end=n-1;
    while(start<end){
        if(arr[start]+arr[end]<target){
            start++;
        }
        else if(arr[start]+arr[end]>target){
            end--;
        }
        else{
            return {start,end};
        }
    }
    return {-1,-1};
}

int main(){


    int n=0,target=0;
    cout<<" Enter n : \n";
    cin>>n;
    int* arr = new int[n+1];
    cout<<"Enter your target \n";
    cin>>target;

    cout<<"Enetr the elements of the array : \n";

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    auto [start,end]= two_sum(arr,n+1,target);

    cout<<" the first index is :  "<<start<<" and the second index is : "<<end;


    

    return 0;
}