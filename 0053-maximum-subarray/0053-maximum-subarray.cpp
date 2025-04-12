class Solution {
public:
   
    int maxSubArray(vector<int>& nums) {

        if(nums.size() == 1) return nums[0];
        int maxi=nums[0];
        int sum=0;

        for(int i=0;i<nums.size();i++)
        {
               sum+=nums[i];

               if(sum > maxi) 
                maxi=sum;
    
               if(sum < 0 && i != nums.size()-1 )
               {
                    sum=0;
               }
        }

        return maxi;
    }

};