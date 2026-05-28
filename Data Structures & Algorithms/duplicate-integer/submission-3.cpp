class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int it :nums){
            if(um[it]==0) um[it]=1;
            else um[it]++;
        }
        for(int it: nums){
            if(um[it]>1) return true;
        }
        return false;
    }
};