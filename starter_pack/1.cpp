#include <iostream>
#include <string>

int main(){

    using std::cout;
    using std::cin;
    using std::string;

    char c;
    string key;

    cout<<"Please enter the cryptographic key and the veriification character"<<std::endl;
    cin>>key>>c;

    int d=c+4;

    cout<<static_cast<int>(c)<<" "<<static_cast<int>(d)<<std::endl;

    cout<<(key.length() > static_cast<int>(d))<<std::endl;



    return 0;
}