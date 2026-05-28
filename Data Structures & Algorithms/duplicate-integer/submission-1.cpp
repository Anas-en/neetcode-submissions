class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //brute force approach
        // array[nums.size()];
        int flag = 0;
        for(int i = 0; i< nums.size();i++)
        {
            for(int j = i+1; j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    cout<<"found duplicate"<<i<<endl<<j;
                    return true;
                }
            }
        }
        cout<<"full test passed!";
        return false;


        // // But here is an anomly , what if array not sorted?
        // for(int i = 0; i <nums.size();i++)
        // {
        //     if(nums[i]==nums[i+1])
        //     {
        //         cout<<"found duplicate"<<2<<endl<<3;
        //         return true;
        //     }
        // }
        // return false;
    }
};