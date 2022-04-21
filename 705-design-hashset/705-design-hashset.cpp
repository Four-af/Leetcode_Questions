class MyHashSet {
public:
    
     vector<bool> r;
    MyHashSet() {
       
        r.resize(1e6+1,false);
    }
    
    void add(int key) {
        r[key]=true;
    }
    
    void remove(int key) {
        r[key]=NULL;
    }
    
    bool contains(int key) {
        return r[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */