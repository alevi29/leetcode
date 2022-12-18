class BrowserHistory {
    stack <string> prev, next;
    string cur;
public:
    BrowserHistory(string homepage) {
        cur = homepage;
    }
    
    void visit(string url) {
        next = stack <string> {};
        prev.push(cur);
        cur = url;
    }
    
    string back(int steps) {
        while (!prev.empty() && steps > 0) {
            next.push(cur);
            cur = prev.top();
            prev.pop();
            steps--;
        }
        return cur;
    }
    
    string forward(int steps) {
        while (!next.empty() && steps > 0) {
            prev.push(cur);
            cur = next.top();
            next.pop();
            steps--;
        }
        return cur;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */