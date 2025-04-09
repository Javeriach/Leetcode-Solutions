class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size();i++)
    {
        map.insert({nums[i], i});
       
    }

    for (int i = 0; i < nums.size();i++)
    {
        int secondNumber = target - nums[i];
        if(map.find(secondNumber) != map.end() )
        {
            if(map[secondNumber] == i) continue;
            return {i,map[secondNumber]};
        }
    }

    return {};
    }
};