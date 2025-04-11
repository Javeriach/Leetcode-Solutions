class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

      
       sort(nums.begin(),nums.end());
       set<vector<int>> result;
      
      for(int i=0; i<nums.size()-2;i++)
      {
            int left=i+1;
            int right=nums.size()-1;

          while(left < right)
          {
            
             int sum=nums[left] + nums[right] + nums[i];
             if(sum == 0)
             {
                result.insert({nums[i] , nums[right], nums[left]});
                left++;
                right--;
             }else if(sum < 0)
             {
                left++;
             }
             else right--;
          }
      }
    
        vector<vector<int>>result2;
        for(auto it:result)
        {
            result2.push_back(it);
        }
        return result2;
    }
};