class Solution {
public:
    //we will use back tracking
    vector<string> generateParenthesis(int n) {
         
        set<string>outputArray;
        backtracking(outputArray,"",0,0,n);
        vector<string>output;

        for(auto it:outputArray)
        {
            output.push_back(it);
        }

        return output;

        
    }

    void backtracking(set<string>&outputArray, string cur_str, int open , int close,int n)
    {
            // First Condition we have

            if(cur_str.length() == n*2)
            {  
                outputArray.insert(cur_str);
                return;
            }

            if(open < n )
            {
                 
                
                backtracking(outputArray,cur_str+"(", open+1 , close , n);
            }

            //Second Condition

            if(close < open)
            {  
                backtracking(outputArray,cur_str+")", open , close+1 , n);
            }

    }
    
   

};