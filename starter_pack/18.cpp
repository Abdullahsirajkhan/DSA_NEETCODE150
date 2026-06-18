#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    int n=0;
    cout<<" Enter n: \n";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<' ';
        }
        cout<<endl;
    }

    return 0;
}