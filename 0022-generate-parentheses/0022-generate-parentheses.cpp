class Solution {
public:
    //we will use back tracking
    vector<string> generateParenthesis(int n) {
         
        vector<string>outputArray;
 backtrack(outputArray,"",0,0,n);
      return outputArray;
    }

    void backtrack(vector<string>&outputArray,string cur_string,int open,int close, int max){
    if(cur_string.length() == max*2)
    {
        
        outputArray.push_back(cur_string);
        cur_string="";
    }
    if(open<max) backtrack(outputArray,cur_string+"(",open+1,close,max);
    if(close<open) backtrack(outputArray,cur_string+")",open,close+1,max);
    
   }

};