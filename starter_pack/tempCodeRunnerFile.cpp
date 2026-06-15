#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::endl;

    int N;
    while(N<=0){
    cout<<"Enter a number to generate the Collatz sequence for it \n";
    if(N<=0){
        cout<<"Please enter a positive number \n";
        continue;
    }
    cin>>N;
    }




    return 0;
}