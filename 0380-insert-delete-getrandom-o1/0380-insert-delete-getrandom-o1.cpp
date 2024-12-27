class RandomizedSet {
    vector<int>vec;
    unordered_map<int,int> mp;
    int size=0;
    

public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end())
        {
            return false;
        }else
        {
            
            vec.push_back(val);
            mp.insert({val,vec.size()-1});
            
          
          
            return true;
        }
        
    }
    
    bool remove(int val) {
         if(mp.find(val) != mp.end() )
        {
            int index=mp[val];
            vec[index]=vec.back();
            vec.pop_back();

            auto map_target_element=mp.find(val);
            mp[vec[index]]=map_target_element->second;
            mp.erase(val);
            return true;
        }else
        {
            
            return false;
        }
    }
    
    int getRandom() {

        int random=rand() % vec.size();
        return  vec[random];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */