#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::endl;

    long long N;
    cout<<"enter the number to check if it is prime or not \n";
    cin>>N;
    bool isprime=true;

    for(int i=2;i<=N/2;i++){
        if(N%i==0){
            cout<<" The number is not prime \n";
            isprime=false;
            break;
        }
    }

    if(isprime){
    cout<<" The number : "<<N<<" is a prime number!"<<endl;
    }


    return 0;
}