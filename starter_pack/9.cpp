#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    int num,sum=1;
    cout<<" Enter a number to check if it perfect number "<<endl;
    cin>>num;

    for(int i=2;i<=num/2;i++){    
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        cout<<" The number is perfect \n";
    }
    else if(sum<num){
        cout<<" The number is Deficient \n";
    }
    else{
        cout<<" The number is Abundant \n";
    }
    

    return 0;
}