class RandomizedSet {
    set<int> randomizedSet;

public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(randomizedSet.find(val) != randomizedSet.end() )
        {
            return false;
        }else
        {
            randomizedSet.insert(val);
            return true;
        }
        
    }
    
    bool remove(int val) {
         if(randomizedSet.find(val) != randomizedSet.end() )
        {
            
            randomizedSet.erase(val);
          
            return true;
        }else
        {
            
            return false;
        }
    }
    
    int getRandom() {

        int random=rand() % randomizedSet.size();
        //     int i=0;
        // for (auto itr : randomizedSet) 
        // {
        //       if(i==random) return itr;

        //       i++;
        // }  
        auto first = randomizedSet.begin(); // get iterator to 1st element
        advance(first, random);     // advance by 9
        return  *first;  
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */