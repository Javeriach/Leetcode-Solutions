class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n1 = nums.front();  // smallest
        int n2 = nums.back();   // largest

        unordered_set<int> divisors1 = getDivisors(n1);
        unordered_set<int> divisors2 = getDivisors(n2);
        vector<int> common_factors;

        for (int d : divisors1) {
            if (divisors2.find(d) != divisors2.end()) {
                common_factors.push_back(d);
            }
        }

        if (common_factors.empty()) return 1; // in worst case, 1 is always a common divisor

        sort(common_factors.begin(), common_factors.end());
        return common_factors.back(); // largest common divisor
    }

private:
    unordered_set<int> getDivisors(int n) {
        unordered_set<int> divisors;
        for (int i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                divisors.insert(i);
                divisors.insert(n / i);
            }
        }
        return divisors;
    }
};
