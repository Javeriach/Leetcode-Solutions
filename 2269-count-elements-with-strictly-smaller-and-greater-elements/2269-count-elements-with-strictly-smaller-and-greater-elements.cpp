class Solution {
public:
    int countElements(vector<int>& nums) {

       
        int count=0;
        unordered_map<int,int>map;
        vector<int>newArr;
        for(int i=0; i<nums.size();i++)
        {
                
                if(map.find(nums[i]) == map.end())
                {
                        newArr.push_back(nums[i]);
                        map.insert({nums[i] ,  1});
                }else map[nums[i]]+=1;
        }

         sort(newArr.begin(), newArr.end());

        for(int i=1; i<newArr.size()-1;i++)
        {
         
            if(newArr[i-1] < newArr[i] && newArr[i] < newArr[i+1])
            {
                count=count+map[newArr[i]];
            }
        }
        return count;
    }
};