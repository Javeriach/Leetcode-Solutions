class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
     stack<int>openBrackets;
     unordered_map<int,int>badIndexes;

     for(int i=0; i<s.length();i++)
     {
            if(s[i] == '(') openBrackets.push(i);
            if(s[i] == ')')
            {
               if(!openBrackets.empty()) openBrackets.pop();
               else badIndexes.insert({i,i});
                 
            }
     }

     while(!openBrackets.empty())
     {
            badIndexes.insert({openBrackets.top(),openBrackets.top()});
            openBrackets.pop();
     }

    string ans="";
     for(int i=0; i<s.length();i++)
     {
        if(badIndexes.find(i) == badIndexes.end()) ans.push_back(s[i]);
     }
     return ans;
    }
};