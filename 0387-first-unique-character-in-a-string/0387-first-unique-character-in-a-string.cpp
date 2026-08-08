class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> str;
        for(int i=0; i<s.length();i++)
        {
            str[s[i]]+=1;
        }

        for(int i=0; i<s.length();i++)
        {
            if(str[s[i]] == 1)
            return i;
        }
        return -1;

    }
};