class Solution {
public:
    int findGCD(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int num1 = nums.front();
        int num2 = nums.back();
        return calculateGCD(num1, num2);
    }

private:
    int calculateGCD(int num1, int num2) {
        int n1=max(num1,num2);
        int n2=min(num1,num2);
        if (num1 == 0) {
            return num2;
        }

        return calculateGCD(n1-n2, n2);
    }
};
