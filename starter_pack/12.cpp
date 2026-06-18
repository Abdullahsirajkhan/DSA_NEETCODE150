#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    int n=0;
    cout<<" enter n : \n";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||j==1||i==n||j==n){
            cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;  
    }
    

    return 0;
}