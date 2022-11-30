class KthLargest {
    priority_queue <int, vector <int>, greater<int>> mxHeap;
    int max;
public:
    
    KthLargest(int k, vector<int>& nums) {
        max = k;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mxHeap.push(nums[i]);
            if (i >= k) {
                mxHeap.pop();
            }
        }
    }
    
    int add(int val) {
        mxHeap.push(val);
        if (mxHeap.size() > max) mxHeap.pop();
        return mxHeap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */