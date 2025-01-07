class Solution {
public:


      string findPalindrome(int left,int right,string s,string longestStr)
        {
            //left =0 ,right = 2
            if(left>right) return "";

            if(right == 0 ) {
                string temp;
                temp=s[0];
            //    cout << temp <<endl;
                return temp;
                 };
         
            while(left>=0 && right < s.length() && s.at(left) == s.at(right))
            {
                if(s.substr(left,right - left +1).length() > longestStr.length())
                {
                    longestStr=s.substr(left,right - left +1);
                }
                left--;
                right++;
            }
            return longestStr;
        }
        

    string longestPalindrome(string s) {

       string longestStr="";

        if(s.length() == 1) return s;
       for(int i=0; i<s.length();i++)
       {
           longestStr=findPalindrome(i-1,i,s,longestStr);
        //    cout << longestStr <<endl;
           longestStr=findPalindrome(i-1,i+1,s,longestStr);
        //    cout << longestStr <<endl;
         
       }

        return longestStr;
    }
};