#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s = "programming";
    unordered_map<string, int> server_loads;
    unordered_map<char,int> frequency;

    frequency.reserve(s.length());    
    server_loads.reserve(50000);
    server_loads.insert({"database",66});

    if(server_loads.count("database")>0){
        cout<< server_loads["database"]<<endl;;
    }
    else{
        cout<<" The key does not exist.....";
    }

    for(auto const& pair : server_loads){
        cout<<"The key is "<<pair.first<<" and the value is "<<pair.second <<endl;
    }

    for(int i=0;i<s.length();i++){
        frequency[s[i]]++;
    }

    for(auto const& pair : frequency){
        cout<<"The key is "<<pair.first<<" and the value is "<<pair.second <<endl;
    }

    return 0;
}