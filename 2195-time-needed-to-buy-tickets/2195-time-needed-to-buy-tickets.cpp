class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

        //Each person has to buy the tickets respective to his position like 
        //the person at position 2  have to buy all the tickets at index 2 of tickets but he can buy one ticket at a time
        queue<pair<int,int>>tickets_que;
        int i=0;

        for(int i=0; i<tickets.size(); i++)
        {
            tickets_que.push({tickets[i],i});
           
        }
        int time=0;
        while(!tickets_que.empty())
        {
                 
                int currentticket=tickets_que.front().first;
                int currentIndex=tickets_que.front().second;
                if(currentIndex == k && currentticket == 1) return (time+1);
                tickets_que.pop();
                if(currentIndex != k && currentticket == 1){
                    time++;
                     continue;}
                tickets_que.push({currentticket-1,currentIndex});
               time++;
                
                
        }
        return time;
    }
};