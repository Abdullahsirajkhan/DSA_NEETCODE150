#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::endl;

    long long  num=0,rev_num=0,last_digit=0;
    cout<<"enter the number to check if palindrome or not : \n";
    cin>>num;
    long long temp=num;

    while(temp!=0){
        last_digit=temp%10;
        rev_num=rev_num*10 + last_digit;
        temp/=10;
    }

    if(rev_num==num){
        cout<<"palindrome \n";
    }
    else{
        cout<<"not";
    }


    return 0;

}