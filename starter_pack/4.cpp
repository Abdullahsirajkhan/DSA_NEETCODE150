#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::endl;

    int count=0;
    long long N, max=0;
    cout<<"Enter a number to generate the Collatz sequence for it \n";
    cin>>N;
    while(N<=0){
        cout<<"Enter a positive number Please! \n";
        cin>>N;
    }
    max=N;

    while(N!=1){
        if(N%2==0){
            N/=2;
            if(N>max){
                max=N;
            }            
        }
        else{
            N = N*3 +1;
            if(N>max){
                max=N;
            }
        }
        count++;
    }

    cout<<" The total number of steps taken are -> "<<count<<" and the highest peak value was : "  <<max<<endl;

    return 0;
}