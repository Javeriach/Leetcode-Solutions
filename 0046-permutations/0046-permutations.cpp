class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int size=nums.size();
       vector<int>freq;
        
        for(int i=0; i<nums.size();i++)       
        {
            freq.push_back(0);
        }

        permutations(ans,ds,freq,nums);
        return ans;

    }

    void permutations(vector<vector<int>>&ans, vector<int>&ds, vector<int>&freq,vector<int>&nums)
    {
        if(ds.size() == nums.size())
        {
            ans.push_back(ds);
        }

        for(int i=0; i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                permutations(ans,ds, freq,nums);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
};