class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
    

    int smallestLength =min(word1.length(),word2.length());
    string resultString="";
    int index=0;

    for(int i=0;i<smallestLength;i++)
    {
        resultString+=word1[i];
        resultString+=word2[i];
        index++;
    }

    for(int i=index;i<word1.length();i++)
    {
        resultString+=word1[i];
    }

    for(int i=index;i<word2.length();i++)
    {
        resultString+=word2[i];
    }

   
   return resultString;

    }
};