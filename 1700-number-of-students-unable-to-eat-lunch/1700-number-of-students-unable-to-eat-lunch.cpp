class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
            unordered_map<int,int> storeRoom;
            int notEat=0;

            for(int i=0; i<students.size();i++)
            {
                storeRoom[students[i]]+=1;
            }
            
            int k=0;
            while(k < sandwiches.size())
            {
                if(storeRoom[sandwiches[k]] > 0)
                {
                    storeRoom[sandwiches[k]]-=1;
                }else
                return storeRoom[0] + storeRoom[1];

             k++;

            }

            return storeRoom[0] + storeRoom[1];
    }
};