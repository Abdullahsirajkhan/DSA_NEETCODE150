#include <iostream>



int main(){

    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    long long M=0;
    long long sum=0;
    long long first=0,second=1,sec=1;

    cout<<" enter your limit : "<<endl;
    cin>>M;

    for(int i=0;sum<M;i++){
        sec=second;
        second=first+sec;
        first=sec;     
        if(second%2==0){
            if(sum+second>M){
                break;
            }
            sum+=second;
        }
    }

    cout<<sum;


    return 0;
}