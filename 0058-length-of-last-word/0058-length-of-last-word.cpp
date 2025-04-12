class Solution {
public:
    int lengthOfLastWord(string s) {

        vector<string>tempString;

        string result;


        for (int i = 0; i < s.length(); i++) {
             if(s[i] == ' ') 
             { if(result != "") {
                cout << result <<endl;
                tempString.push_back(result);
                result="";}
                continue;
             }

             if(s[i] != ' ') result=result+s[i];
        }

        if(result != "") return result.length();

        return tempString[tempString.size()-1].length();
    }
};