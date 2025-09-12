class Solution {
public:
    int findGCD(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int num1 = nums.front();
        int num2 = nums.back();

        unordered_set<int> divisors1;
        unordered_set<int> divisors2;
        vector<int> common_result;

        for (int i = 1; i <= num1; i++) {
            if (num1 % i == 0 && divisors1.find(i) == divisors1.end()) {
                divisors1.insert(i);
            }
        }


        for (int i = 1; i <= num1; i++) {
            if (num2 % i == 0 && divisors2.find(i) == divisors2.end()) {
                divisors2.insert(i);
            }
        }

        for (int d : divisors1) {
            if (divisors2.find(d) != divisors2.end()) {
                common_result.push_back(d);
            }
        }

        if (common_result.size() == 0) {
            return 1;
        }

        sort(common_result.begin(), common_result.end());
        return common_result.back();
    }
};
