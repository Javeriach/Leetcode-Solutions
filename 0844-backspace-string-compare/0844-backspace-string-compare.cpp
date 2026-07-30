#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s_stack;
        stack<char>t_stack;
        int i=0, j=0;

        while(i < s.length())
        {
            
            if(s[i] == '#' && s_stack.size() > 0)
            {
                s_stack.pop();
            }
            
            if(s[i] != '#')
            {
                    s_stack.push(s[i]);
            }
            

            i++;
        }

         while(j < t.length() )
        {
         
            if(t[j] == '#' &&  t_stack.size() > 0)
           { 
             t_stack.pop();
           }
            if(t[j] != '#')
            {
                t_stack.push(t[j]);
            }
            
            j++;
        }


       
        return s_stack == t_stack;
    }
};