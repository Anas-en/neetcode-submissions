class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<int, int> freq;
        int n = nums.size();
        for(int i = 0; i< n;i++)
        {
            for(int j =0; j<n;j++)
            {
                if(nums[i]+nums[j]==target){
                    if(i>j) return {j,i};
                    if(i<j) return {i,j};
                }
            }    
        }
    }
};
