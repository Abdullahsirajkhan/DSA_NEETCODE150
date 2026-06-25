#include <bits/stdc++.h>
using namespace std;

int max_subarrsys(int* arr1, int* arr2, int n , int k){
    int Max=0, sum=0;
    int dup=0; 
    
    for(int i=0;i<n;i++){
        if(i<k){
            sum+=arr1[i];
            arr2[arr1[i]]+=1;
            if(arr2[arr1[i]]==2){
                dup++;
            }
            if(i==k-1&&dup==0){
                Max=sum;
            }
        }

        else{
            arr2[arr1[i-k]]-=1;
            arr2[arr1[i]]+=1;
            if(arr2[arr1[i]]==1&&check){
                Max=max(Max,sum);
            }
            else if(arr2[arr1[i]]==1&&i>=2*k){
                Max=max(Max,sum);
            }
        }        
    }
    return Max;
}


int main(){

    int n=0;;
    cout<<"Enter the n : \n";
    cin>>n;

    int* arr1 = new int[n]();
    int nums[] = {1, 5, 4, 2, 9, 9, 9};

    int size = 7;
    int k = 3;

    cout << "Maximum sum of distinct subarray: " << max_subarrsys(nums,arr1, size, k) << endl; // Expected: 15



    
    
    
    return 0;
}