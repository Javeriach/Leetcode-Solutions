class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       if(intervals.empty()) return intervals;
       //Result
       vector<vector<int>>mergedStack;
       sort(intervals.begin(), intervals.end());

       for(int i=0; i<intervals.size() ; i++)
       {
            if(mergedStack.empty() || mergedStack.back()[1] < intervals[i][0]  )
            {
                mergedStack.push_back(intervals[i]);
            }
            else
            {
                mergedStack.back()[1] = max({mergedStack.back()[0], mergedStack.back()[1],intervals[i][1]});
            }
       }

       return mergedStack;
    }
};
