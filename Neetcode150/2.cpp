

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();

        if(n!=m){
            return false;
        }
        std::unordered_map<char,int> S;
        std::unordered_map<char,int> T;

        S.reserve(26);
        T.reserve(26);

        for(int i=0;i<n;i++){
            S[s[i]]++;
            T[t[i]]++;            
        }

        return S==T;
    }
};
