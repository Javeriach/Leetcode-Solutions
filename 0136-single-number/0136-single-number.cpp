class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int cnt = 0;
        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        for (auto it : mpp) {
            if (it.second == 1) {
                cnt = it.first;
                break;
            }
        }
        return cnt;
    }
};
