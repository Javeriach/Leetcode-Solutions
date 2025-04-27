#include <vector>
#include <string>
#include <queue>
#include <unordered_map>
#include <algorithm>
#include <sstream>

using namespace std;

class Solution {
public:
    int parse_id(const string& content) {
        return stoi(content.substr(2));
    }

    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        sort(events.begin(), events.end(), [](const vector<string>& a, const vector<string>& b) {
            if (stoi(a[1]) == stoi(b[1])) 
                return a[2] < b[2];
            return stoi(a[1]) < stoi(b[1]);
        });

        unordered_map<int, bool> online;
        unordered_map<int, int> mentions;
        queue<pair<int, int>> offline_queue;

        for (int i = 0; i < numberOfUsers; ++i) {
            online[i] = true;
            mentions[i] = 0;
        }

        for (auto& event : events) {
            string message_type = event[0];
            int timestamp = stoi(event[1]);
            string content = event[2];

            while (!offline_queue.empty() && offline_queue.front().first <= timestamp) {
                online[offline_queue.front().second] = true;
                offline_queue.pop();
            }

            if (message_type == "OFFLINE") {
                int user_id = stoi(content);
                online[user_id] = false;
                offline_queue.push({timestamp + 60, user_id});
            } 
            else {
                if (content == "ALL") {
                    for (auto& p : mentions) {
                        p.second++;
                    }
                } 
                else if (content == "HERE") {
                    for (auto& p : online) {
                        if (p.second) { // if user is online
                            mentions[p.first]++;
                        }
                    }
                } 
                else {
                    stringstream ss(content);
                    string id;
                    while (ss >> id) {
                        int user_id = parse_id(id);
                        mentions[user_id]++;
                    }
                }
            }
        }

        vector<int> result;
        for (int i = 0; i < numberOfUsers; ++i) {
            result.push_back(mentions[i]);
        }
        return result;
    }
};
