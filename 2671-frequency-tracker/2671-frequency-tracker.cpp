class FrequencyTracker {
public:
    int theArray[100000] = {};
    unordered_map <int, int> map;
    
    FrequencyTracker() {
    }
    
    void add(int number) {
        if (map[theArray[number - 1]] > 0) map[theArray[number - 1]]--;
        theArray[number - 1]++;
        map[theArray[number - 1]]++;
    }
    
    void deleteOne(int number) {
        if (theArray[number - 1] > 0) {
            map[theArray[number - 1]]--;
            theArray[number - 1]--;
            map[theArray[number - 1]]++;
        }
    }
    
    bool hasFrequency(int frequency) {
        if (map[frequency] > 0) return true;
        return false;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */