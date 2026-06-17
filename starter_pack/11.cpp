#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    int input=0,largest=INT32_MIN,second=INT32_MIN;
    cout<<"please start giving values input \n";

    while(input!=-1){
        cin>>input;
        if(input==-1){
            break;
        }
        if(input>largest){
            second=largest;
            largest=input;
        }
        if(input>second && input<largest){
            second=input;
        }   
    }

    if(second==INT32_MIN){
        cout<<"Not enough numbers given!"<<endl;
    }
    else{
        cout<<" "<<second;
    }

    cout<<" done";

    return 0;
}