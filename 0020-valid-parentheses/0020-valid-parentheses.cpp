class Solution {
public:
    bool isValid(string s) {
        
        stack <char> p_stack;
        int i=0;

        
        while( i < s.length())
        {
            if(s[i] == ')' )
            {
                if(p_stack.empty()) return false;
                else if ( p_stack.top() == '(' ) 
                p_stack.pop();
                else return false;
            }
            else  if(s[i] == '}' )
            {
                if(p_stack.empty()) return false;
                else if ( p_stack.top() == '{' ) 
                p_stack.pop();
                else return false;
            }
           
            else if(s[i] == ']' )
            {
                if(p_stack.empty()) return false;
                else if ( p_stack.top() == '[' ) 
                p_stack.pop();
                else return false;
            }
           
            else if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                p_stack.push(s[i]);
            }
            
            cout << "hi" << endl;

            i++;
        }

        cout << p_stack.size() << endl;
        return p_stack.size() == 0;
    }
};