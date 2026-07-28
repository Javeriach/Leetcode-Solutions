class MyHashSet {
public:
    
    vector<int>hashset;

    MyHashSet() {
        
    }
    
    void add(int key) {
        bool exist=false;
        int i=0;
        while(i < hashset.size())
       {     if(hashset[i] == key)
            {
                exist=true;
                break;
            }
            i++;
        }

        if(!exist) hashset.push_back(key);
    }
    
    void remove(int key) {
        bool exist=false;
        int i=0;
        while(i < hashset.size())
       {     if(hashset[i] == key)
            {
               hashset.erase(hashset.begin()+i);
            }
            i++;
        }
    }
    
    bool contains(int key) {
        bool exist=false;
        int i=0;
        while(i < hashset.size())
       {     if(hashset[i] == key)
            {
              return true;
            }
            i++;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */