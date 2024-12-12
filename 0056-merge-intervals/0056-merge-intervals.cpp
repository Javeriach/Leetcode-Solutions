class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {}; // Handle edge case

        // Step 1: Sort the intervals based on the start times
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;

        // Step 2: Merge intervals
        for (const auto& interval : intervals) {
            // If the merged list is empty or the current interval does not overlap
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval); // Add the current interval
            } else {
                // Overlapping intervals, merge them
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        return merged;
    }
};
