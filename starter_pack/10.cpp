#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    double sum=1.0;
    int K=0,c=0;

    cout<<"Enter the number k : \n";
    cin>>K;

    for(int i=3;i<=2*K;i+=2){
        if(c%2==0){
        sum = sum + static_cast<double>(-1)/i;
        }
        if(c%2==1){
        sum = sum + static_cast<double>(1)/i;
        }
        c++;
    }

    cout<<4*sum;


    return 0;
}