#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int,int> Count;
        std::vector<int> ans;
        int diff=0;
        
        for(int i=0;i<nums.size();i++){

            diff=target-nums[i];
            if(Count.count(diff)>0){
                ans.resize(2);
                ans[0]=min(Count[diff],i);
                ans[1]=max(Count[diff],i);
                return ans;                                
            }
            Count[nums[i]]=i;
        }
        return ans;        
    }
};


int main(){
    
    return 0;
}