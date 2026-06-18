#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    cout<<"Enter n : \n";
    int n=0,p=1;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<p++<<" ";            
        }
        cout<<endl;
    }

    return 0;
}