class Solution {

public:
    void moveZeroes(vector<int>& nums) {

        int count=0;
        int size=nums.size();
        int i=0;
        int index=0;
        while(i<(nums.size() + count ))
        {
            if(nums[index] ==  0)
            {
              nums.erase(nums.begin()+index);
              count++;
            }else index++;
            i++;
        }

        for(int i=0; i<count;i++)
        {
            nums.push_back(0);
        }

    }
};