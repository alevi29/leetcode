class MapSum {
    unordered_map <string, int> map;
public:
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        map[key] = val;
    }
    
    int sum(string prefix) {
        int ret = 0;
        for (auto i : map) {
            if (i.first.compare(0, prefix.length(), prefix) == 0) {
                ret += i.second;
            }
        }
        return ret;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */