class MyHashMap {
public:
    // unordered_map<int,int> m;
    vector<int> v;
    MyHashMap() {
        v.resize(1e6+2,-1);        
    }
    
    void put(int key, int value) {
        v[key] = value;
    }
    
    int get(int key) {
        return v[key];
    }
    
    void remove(int key) {
        v[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */