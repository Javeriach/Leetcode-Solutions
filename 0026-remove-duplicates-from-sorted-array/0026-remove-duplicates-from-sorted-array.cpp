class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>map;
        
        int j=0;
        for(int i=0; i<nums.size();i++)
        {
            if(map.find(nums[i]) == map.end())
            {
                map[nums[i]]=nums[i];
                nums[j]=nums[i];
                j++;
            }
        }
        
        
        // int k=0;
        // for(auto it:map)
        // {
        //     // cout << it.second <<endl;
        //     nums[k]=it.second;
        //     k++;
        // }

        // sort(nums.begin(),nums.begin()+map.size());
       
        
    return map.size();

    }
};