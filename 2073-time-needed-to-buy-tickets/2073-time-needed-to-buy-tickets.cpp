class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>>str;
        for(int i=0; i<tickets.size();i++)
        str.push({tickets[i],i});
        int second=0;

       
        while(!(str.front().second == k && str.front().first == 0))
        {

                second++;
                (str.front()).first-=1;
                if((str.front()).first == 0)
                {
                        if((str.front().second == k)) return second;
                        else str.pop();
                }else
                {
                        str.push(str.front());
                        str.pop();
                }
        }

        return second;
    }
};