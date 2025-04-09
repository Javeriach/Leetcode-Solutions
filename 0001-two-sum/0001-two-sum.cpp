class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    
    unordered_map<int, int> map;
    vector<int> result;

    for (int i = 0; i < nums.size();i++)
    {
        map.insert({nums[i], i});
        cout << nums[i] << " " << i <<endl;
    }

    for (int i = 0; i < nums.size();i++)
    {
        int secondNumber = target - nums[i];
        if(map.find(secondNumber) != map.end() )
        {
            if(map.find(secondNumber)->second == i) continue;
            result.push_back(i);
            result.push_back(map.find(secondNumber)->second);
           
            return result;
        }
    }

    return {};
    }
};