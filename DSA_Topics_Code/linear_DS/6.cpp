#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void merge(int* arr1, int* arr2, int n , int m){
    int end1=m-1 , end2=n-1 , end=m+n-1;

    while(end2>=0){
        if(end1>=0 && arr1[end1]>arr2[end2]){
            arr1[end]=arr1[end1];
            end1--;
        }
        else{
            arr1[end]=arr2[end2];
            end2--;
        }
        end--;
    }
}
  

int main(){

    int n=0 , m=0 ;
    cout<<"Enter n and then m : \n";
    cin>>n>>m;

    int* arr1 =  new int[m+n];
    int* arr2 = new int[n];

    cout<<"enter the elemenst of the array 1 : \n";
    for(int i=0;i<m+n;i++){
        if(i<m){
            cin>>arr1[i];
        }
        else{
            arr1[i]=0;
        }
    }

    cout<<"enter the elements of the array 2 : \n";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    merge(arr1,arr2,n,m);

    for(int i=0;i<m+n;i++){
        cout<<arr1[i]<<" ";
    }



    return 0;
}