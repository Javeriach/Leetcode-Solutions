class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> radient;
        queue<int> dir;

        // Populate the queues with the indices of the senators
        for(int i = 0; i < senate.length(); i++) {
            if(senate[i] == 'R') radient.push(i);
            else dir.push(i);
        }

        // Loop until one of the queues is empty
        while(!radient.empty() && !dir.empty()) {
            if(radient.front() < dir.front()) {
                // Radiant senator bans Dire senator
                int curRedIndex = radient.front();
                radient.pop();
                radient.push(curRedIndex + senate.length());
                dir.pop();
            } else {
                // Dire senator bans Radiant senator
                int curDirIndex = dir.front();
                dir.pop();
                dir.push(curDirIndex + senate.length());
                radient.pop();
            }
        }

        // If Radiant queue still has senators left, Radiant wins
        if(!radient.empty()) return "Radiant";
        else return "Dire";
    }
};
