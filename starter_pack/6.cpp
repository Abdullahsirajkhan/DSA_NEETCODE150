#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    int N,L,temp=0;
    int rev=0;
    cout<<"Enter the number N : \n";
    cin>>N;
    temp=N;

    while(temp!=0){
        L=temp%10;
        if((rev*10 + L)<=(INT32_MIN-10) || (rev*10 + L)>=INT32_MAX){
            cout<<"overflow detected! \n";
        }
        rev=(rev*10)+L;
        temp/=10;
    }


    cout<<rev;

    return 0;
}