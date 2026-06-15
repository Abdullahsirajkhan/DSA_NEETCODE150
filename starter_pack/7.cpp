#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    int N=0,count=0,cons=0,max=INT32_MIN;
    cout<<"Enter the number to check : \n";
    cin>>N;

    while(N!=0){
        if(N%2==1){
            count++;
            cons++;
            if(cons>max){
                max=cons;
            }        
        }
        else if(N%2==0){
            cons=0;
        }
        N/=2;
    }

    cout<<" The total count of 1s is : "<<count<<" and the maximum consecutive 1st are : "<<max<<endl;


    

    return 0;
}