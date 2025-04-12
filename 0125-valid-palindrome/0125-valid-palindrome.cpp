class Solution {
public:
    bool isPalindrome(string s) {
        
        string temp;
        for(int i=0; i<s.length();i++)
        {
            if((s[i] >= 'a'  && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
                temp.push_back(tolower(s[i]));
                };

        }
       cout << temp <<endl;
       string originalStr=temp;
       reverse(temp.begin(),temp.end());
      
        return originalStr == temp;
    }
};