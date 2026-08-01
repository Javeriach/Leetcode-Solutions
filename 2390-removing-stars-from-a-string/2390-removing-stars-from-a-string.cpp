class Solution {
public:

  
    string removeStars(string s) {
        stack<char>s_stack;
        int i=0;
        while(i < s.length())
        {
            if(!s_stack.empty() && s[i] == '*')
            {
                s_stack.pop();
            }else
            {
                s_stack.push(s[i]);
            }
            i++;
        }

        string goodString;
        while(!s_stack.empty())
        {
               goodString+=s_stack.top();
               s_stack.pop();
        }

        reverse(goodString.begin(), goodString.end());
        return goodString;
    }
};