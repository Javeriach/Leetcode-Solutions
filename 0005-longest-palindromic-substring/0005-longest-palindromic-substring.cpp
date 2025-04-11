class Solution {
public:
    string longestPalindrome(string s) {
        int low=0;
        int high=0;
        string LPS="";

        if(s.length() == 1) return s;

        for(int i=1; i<s.length();i++)
        {

            //Even Length String 
            low=i;
            high=i;
            
            while(s[low] == s[high])
            {
                low--;
                high++;
                if(low == -1 || high == s.length()) break;
            } 

            //now we will fetch the palindrome by low and high points;
            cout << low+1 << " " << high <<endl;
            string palindrome= s.substr(low+1,(high-low-1));
            cout << palindrome <<endl;
           if(palindrome.length() > LPS.length()) LPS=palindrome;


            //for even length
            low=i-1;
            high=i;

            while(s[low] == s[high])
            {
                low--;
                high++;

                if(low == -1 || high == s.length()) break;
            }

            string palindromee=s.substr(low+1,(high-low-1));
            if(palindromee.length() > LPS.length()) LPS=palindromee;
        }

        return LPS;
    }
};