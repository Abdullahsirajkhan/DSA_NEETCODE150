#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    int n=0,j=0;
    cout<<" Enter n : \n";
    cin>>n;

    for(int i=1;i<=n;i++){
        j++;
        while(true){
            cout<<j<<" ";
            if(j % n == 0){
                break;
            }
            j++;
        }
        cout<<endl;
    }

    return 0;
}