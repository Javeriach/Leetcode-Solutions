class Solution {
public:

    vector<int> productExceptSelf(vector<int>& nums) {
        // https://www.youtube.com/watch?v=TW2m8m_FNJE
        int sum=0;
         vector<int>prefix(nums.size(),1);
         vector<int>sufix(nums.size(),1);

        for(int i=0; i<nums.size();i++)
        {
          if(i==0)continue;
          else prefix[i]=prefix[i-1]*nums[i-1];
        }

        for(int i=nums.size()-1; i>=0;i--)
        {
          if(i == nums.size()-1)continue;
          else sufix[i]=sufix[i+1]*nums[i+1];  
        }

        for(int i=0; i<nums.size();i++)
        {
            nums[i]=prefix[i] * sufix[i];
        }

        return nums;
    }
};