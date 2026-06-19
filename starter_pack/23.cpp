#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    int n=0,l=0;
    cout<<" Enter n : \n";
    cin>>n;

    for(int i=1;i<=2*n;i++){

        if(i<=n){
            for(int j=1;j<=2*n;j++){
                if(j<=i){
                    cout<<"*";
                }
                else if(j>(2*n -i)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        else{
            for(int k=1;k<=2*n;k++){
                if(i==n+1){
                    cout<<"*";
                }
                else{
                    if(k>=(n-l)+1&&k<=n+l){
                        cout<<" ";
                    }
                    else{
                        cout<<"*";
                    }
                }
            }
            l++;
        }
        cout<<endl;
    }


    return 0;
}