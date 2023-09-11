class Solution {
public:
    int halveArray(vector<int>& nums) {
        int ret = 0;
        double sum = 0, newSum = 0;
        priority_queue <double> pq;
        for (auto i : nums) {
            sum += i;
            pq.push(i); 
        }
        
        newSum = sum;
        
        while (newSum > sum / 2) {
            ++ret;
            double temp = pq.top() / 2;
            pq.pop();
            
            pq.push(temp);
            newSum -= temp;
        }
        return ret;
    }
};