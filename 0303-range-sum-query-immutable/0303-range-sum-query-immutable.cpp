class NumArray {
public:
    
    int *int_arr;

    NumArray(vector<int>& nums) {

        int_arr= new int[nums.size()];
        for(int i=0; i<nums.size();i++)
        {
           this->int_arr[i]=nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        for(int i=left;i<=right;i++)
        {   
                sum+=int_arr[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */