#include <map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 1) return 1;
        map<char, int> subStrMap; // Map to store the last index of each character
        int maxLength = 0;         // To track the maximum length
        int start=0;
        int end=0;

        while(start < s.length()  && end < s.length())
        {
            if(subStrMap.find(s[end]) == subStrMap.end())
            {
                
                subStrMap.insert({s[end],end});
                cout << s[end] <<endl;
                end++;
            }
            else
            {
                int size=subStrMap.size();
                maxLength=max(maxLength,size);
               
                cout << subStrMap.size() << "  0" <<endl;
                 subStrMap.erase(s[start]);
                cout << s[start]<<endl;
                cout << subStrMap.size()<< "  0" <<endl;
                start++;
               
            }
            
        }

        int size=subStrMap.size();
        cout << size <<endl;
        return maxLength=max(size,maxLength);
    }
};
