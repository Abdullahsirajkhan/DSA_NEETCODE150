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
        for(int j=n-i;j>=1;j--){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        for(int l=1;l<=n;l++){
            if(l<i){
                cout<<i-l<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}