#include <iostream>

int main(){

    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    int n=0;
    cout<<"enter n : \n";
    cin>>n;

    for(int i=1;i<=2*n -1;i++){
        if(i<=n){
            for(int j=n-i;j>=0;j--){
                if(!j){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }

        for(int l=2*i -3;l>=0;l--){
            if(i==1){
                continue;
            }
            else if(!l){
                cout<<"*";
            }
            else{
                cout<<"  ";
            }
        }
    }
    else{
        for(int k=i-n;k>=0;k--){
            if(!k){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for(int m=4*n-2*i-3;m>=0;m--){
            if(!m){
                cout<<"*";
            }
            else{
                cout<<"  ";
            }
        }
    }
    
        cout<<endl;
    }

    return 0;
}