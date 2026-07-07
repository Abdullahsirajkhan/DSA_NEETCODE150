#include <bits/stdc++.h>
using namespace std;

bool check(int* arr, int n , unordered_map<int,int>& freq){

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        if(freq[arr[i]]>1){
            return true;
        }
    }
    return false;
}

int main(){

    int n=0;
    cout<<"enter n : "<<endl;;
    cin>>n;

    int* arr = new int[n];
    unordered_map<int,int> freq;
    freq.reserve(n);
    
    cout<<"Enter the vlaue of array : "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<check(arr,n,freq);
    




    

    
    
    
    return 0;
}