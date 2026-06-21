#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Sort(int* arr, int n){
    int first = 0, last = n-1,temp=0;
    while(first<last){
    if(arr[first]%2==1&&arr[last]%2==0){
        temp=arr[first];
        arr[first]=arr[last];
        arr[last]=temp;
        first++;
        last--;
    }
    else if(arr[first]%2==0&&arr[last]%2==0){
        first++;
    }
    else if (arr[first]%2==1&&arr[last]%2==1){
        last--;
    }
    else{
        first++;
        last--;
    }
}
}



int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    Sort(arr,10);

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}