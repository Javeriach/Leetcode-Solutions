class Solution {
public:
    bool isValid(string s) {

        stack<char>stk;
        if(s.length() == 1) return false;

        for(int i=0;i<s.length();i++)
        {

            if( (s[i] == '(') || (s[i] == '{') || (s[i] == '[' ) )
           { 
            stk.push(s[i]);
            cout << stk.top() <<endl;
            continue;
            }

            if(stk.size() ==  0) return false;;
            if(stk.top() == '(' && s[i] == ')' ) stk.pop();
            else if(stk.top() == '['  && s[i] == ']') stk.pop();
            else if(stk.top() == '{' && s[i] == '}') stk.pop();
            else return false;

        }

        if(stk.size() == 0) return true;
        else return false;

    }
};