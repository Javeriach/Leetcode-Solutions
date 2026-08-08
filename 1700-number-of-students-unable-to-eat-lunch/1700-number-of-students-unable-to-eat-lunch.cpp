class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
            unordered_map<int,int>str;
            for(int i=0; i<students.size();i++)
            {
                str[students[i]]+=1;
            }

            for(int i=0; i<sandwiches.size();i++)
            {
        
                if(str[sandwiches[i]] > 0)
                str[sandwiches[i]]-=1;
                else return str[0] + str[1];

            }

            return str[0] + str[1];
    }
};