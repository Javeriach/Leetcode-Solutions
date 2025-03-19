class Solution {
public:
    int missingNumber(vector<int>& nums) {

        unordered_map<int, int> arrayMap;

        for (auto item : nums) {
            arrayMap.insert({item, item});
        }

        for (int i = 0; i < nums.size()+1; i++) {

           
            if (arrayMap.find(i) == arrayMap.end())
              {  
                return i;
              }
           
        }

        return 0;
    }
};