class Solution {
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        
        //0------sort karo sub ko
        sort(events.begin(),events.end(),[](const vector<string>a , const vector<string>b)
        {
            if(stoi(a[1]) == stoi(b[1]))
            return a[2] < b[2]; //return offlin message
            return stoi(a[1]) < stoi(b[1]);//small time ,,grater time

        });

        //   1--hum ya bar bar dekhna hy ky kesi user ka time pura ho gaya  howa hy kay nai or us ko onlin eka time ho gaya hy ky nai
        //   2--OFFLINE ---matlb us user ko offline ho karden hy
        //   3--HERE , ALL,USERIDS  --- sirf in ko mention karna hy matlb sirf in ko mention karna hy..addtion of 1

        //------unordered_map<id,online  ya offline>
        unordered_map<int,bool>online;

        //-----unordered_map<id,timestamp >
        queue<pair<int,int>>offline;
        unordered_map<int,int>mentions;

        //sub  ko sub sy pehly online kiya or number o fmentions ko zero  kar liya
        for(int i=0; i<numberOfUsers;i++)
        {
            offline.push({i,true});
            mentions.insert({i,0});
        }

        for(auto &event:events)
        {
           
            string action=event[0];
            int timestamp=stoi(event[1]);
            string content=event[2];

           cout << event[1]<<endl;
            //ab code likho ky sub ko automatially online karo //online lay aee
            while(!offline.empty() && offline.front().second <= timestamp)
            {
                    online[offline.front().first]=true;
                    
                    offline.pop();
            }

            if(action == "OFFLINE")
            {
                
                        int id=stoi(event[2]);
                        
                        online[id]=false;
                        offline.push({id,timestamp+60});
            }
            else
            {
                        if(content == "HERE")
                        {
                                for(int i=0; i<mentions.size();i++)
                                {
                                    
                                    if(online[i])
                                    {
                                        mentions[i]++;
                                    }
                                }

                        }else if(content == "ALL")
                        {
                                for(int i=0; i<mentions.size();i++)
                                {
                                    mentions[i]++;
                                }
                        }else
                        {
                            stringstream ss(content);
                            string id;
                            while(ss>>id)
                            {
                                id=id.substr(2);
                            
                                int user_id=stoi(id);
                                mentions[user_id]++;
                            }
                        }
            }

        }

        vector<int>result;
        for(int i=0; i<mentions.size();i++)
        {
            result.push_back(mentions[i]);
        }

        return result;

    }
};