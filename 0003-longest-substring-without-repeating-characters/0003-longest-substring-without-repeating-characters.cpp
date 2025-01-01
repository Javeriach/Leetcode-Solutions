#include <map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> charHashMap; // Map to store the last index of each character
        int maxLength = 0;         // To track the maximum length
        int start = 0;             // The start index of the current substring

        for (int i = 0; i < s.length(); i++) {
            // If the character is already in the map and its last occurrence is within the current substring
            if (charHashMap.find(s[i]) != charHashMap.end() && charHashMap[s[i]] >= start) {
                start = charHashMap[s[i]] + 1; // Move the start to one past the last occurrence
            }

            // Update the character's latest index
            charHashMap[s[i]] = i;

            // Update the maximum length
            maxLength = max(maxLength, i - start + 1);
        }

        return maxLength;
    }
};
