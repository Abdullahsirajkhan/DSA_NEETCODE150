#include <iostream>
#include <string>

int main(){

    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;

    int max=0;
    int c_count=0;
    int status=0;
    int failed_attempts=0;

    cout<<"enter the maximum number of login attemps : \n";
    cin>>max;

    cout<<"Look in you database log and tell me what is the current number of login events from a single user \n";
    cin>>c_count;

    for(int i=1;i<=c_count;i++){
        cout<<"enter the status code : \n";
        cin>>status;
        
        if(status==0){
            continue;
        }
        else if(status!=0){
            failed_attempts++;
        }
        if(failed_attempts>=max){
            cout<<"Login limit reached! \n";
            break;
        }

    }





    return 0;
}