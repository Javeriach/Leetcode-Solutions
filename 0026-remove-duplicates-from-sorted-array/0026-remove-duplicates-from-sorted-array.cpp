class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
       
        set<int>result;

        for(int i=0; i<nums.size();i++)
        {
             result.insert(nums[i]);
        }

        int i=0;
        for(auto it:result)
        {
             nums[i]=it;
             i++;
        }

        while(i<nums.size())
        {
             nums[i]=0;
             i++;
        }

    return  result.size();

    }
};