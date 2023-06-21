class MyHashMap {
    int map[1000001] = {};
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        map[key] = value + 1;
    }
    
    int get(int key) {
        return map[key] == 0 ? -1 : map[key] - 1;
    }
    
    void remove(int key) {
        map[key] = 0;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */