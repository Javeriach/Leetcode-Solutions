class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_map<char,int>jews;
        int count=0;

        for(int i=0; i<jewels.length();i++)
        {
           jews.insert({jewels[i],i});
        }

        for(int i=0; i<stones.length();i++)
        {
            if(jews.find(stones[i]) != jews.end())
            {
                count++;
            }
        }

        return count;
}

};