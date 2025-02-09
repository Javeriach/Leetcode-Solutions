class Solution {
public:
    void rotate(vector<int>& nums, int k) {

      vector<int>result;
      int size = nums.size();

      for(int i=abs((k-(size*2))%size); i<size*2; i++)
      {
        result.push_back(nums[i % size]);
        if(result.size() == size) break;;
      }

      for(int i=0; i<result.size();i++)
      {
        nums[i]=result[i];
        // cout << result[i] <<endl;
      }
    }
};