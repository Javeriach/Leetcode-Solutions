class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int scount=0;
        int maxCount=0;

        for(int i=0; i<nums.size();i++)
        {
            if(nums[i] == 1)
            {
                scount+=1;
            }else
            {
                maxCount=max(maxCount,scount);  
                if(i != nums.size()-1)              
                scount=0;

            }
        }

         maxCount=max(maxCount,scount);  
        return maxCount;
    }
};