#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int range_sum(int* pre_arr,int* arr,int x, int y){
    int sum=pre_arr[y]-pre_arr[x]+arr[x];
    return sum;    
}

int main(){

    int left=0,right=0,n=0;

    cout<<"Enter n : \n";
    cin>>n;
    cout<<"Enter left and right range : \n";
    cin>>left;
    cin>>right;
    int* arr = new int[n];
    int* pre_arr= new int[n];

    cout<<" Enter the elements of the array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){
            pre_arr[i]=arr[i];
        }
        else{
            pre_arr[i]=arr[i]+pre_arr[i-1];
        }
    }

    cout<<range_sum(pre_arr,arr,left,right);



    return 0;
}
