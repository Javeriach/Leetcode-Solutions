class Solution {
public:

    bool isPrefixAndSuffix(string str1 , string str2)
    {
            if(str1.length() > str2.length() )
            {
                return false;
            }

            int start=0;

            while(start < str1.length())
            {
                    if(str1[start] == str2[start])
                    {
                        start++;
                    }else return false;
            }

            int str1end=str1.length()-1;
            int str2end=str2.length()-1;

            while(str1end >= 0 && str2end >= 0)
            {
                    if(str1[str1end] == str2[str2end])
                    {
                      str1end--;
                      str2end--;
                    }else return false;
            }

            return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {

        int count=0;

        for(int i=0; i<words.size();i++)
        {
             for(int j=i+1; j<words.size();j++)
             {
                if(isPrefixAndSuffix(words[i], words[j]))
                {
                    count++;
                }
             }
        }

        return count;
    }
}; 