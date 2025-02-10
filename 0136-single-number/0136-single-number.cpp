class Solution {
public:
    int singleNumber(vector<int>& nums) {

    
        unordered_map<int,int>result={{0,0}};
        for(int i=0; i<nums.size();i++)
        {
            if(result[nums[i]])
            result[nums[i]]=result[nums[i]]+1;
            else 
            result[nums[i]]=1;
        }
        
        for(int i=0; i<nums.size();i++)
        {
            if(result[nums[i]] == 1)
            {
                return nums[i];
            }
        }

        return -1;
    }
};