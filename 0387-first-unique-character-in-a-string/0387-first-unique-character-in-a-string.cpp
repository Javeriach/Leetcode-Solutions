class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>findNonRepeater;
        for(int i=0; i<s.length();i++)
        {
            if(findNonRepeater.find(s[i]) == findNonRepeater.end())
            findNonRepeater.insert({s[i],1});
            else 
                findNonRepeater[s[i]]= findNonRepeater[s[i]] + 1;
           
        }
 
  
        for(int i=0; i<s.length();i++)
        {
            if(findNonRepeater[s[i]] == 1) return i;
        }

       return -1;
    }
};