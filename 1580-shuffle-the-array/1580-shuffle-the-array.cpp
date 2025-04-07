class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int>result;
        int i=0;
        int j=(nums.size())/2 ;
        cout << i << " " << j <<endl;

        while(i< nums.size()/2 || j < nums.size())
        {
            result.push_back(nums[i]);
            result.push_back(nums[j]);
            i++;
            j++;
        }

        return result;
    }
};