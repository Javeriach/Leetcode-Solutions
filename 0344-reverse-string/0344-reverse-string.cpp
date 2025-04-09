class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end=s.size()-1;

        while(start < end && start < s.size() && end > 0)
        {
            cout << start << " " <<end <<endl;
            if(s[start] != s[end])
            {
                swap(s[start],s[end]);
            }
            start++;
            end--;
        }
    }
};