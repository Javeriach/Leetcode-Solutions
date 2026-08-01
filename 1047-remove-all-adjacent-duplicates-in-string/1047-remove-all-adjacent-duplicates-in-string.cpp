class Solution {
public:

    
    bool pop_required(char firstChar, char top_char)
    {
        if(tolower(firstChar) == tolower(top_char)) return true;
        return false;
    }

    string removeDuplicates(string s) {
        stack<char>s_stack;
        int i=0;
        while(i < s.length())
        {
            if(!s_stack.empty() && pop_required(s[i], s_stack.top()))
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