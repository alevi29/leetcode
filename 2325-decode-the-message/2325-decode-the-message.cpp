class Solution {
public:
    string decodeMessage(string key, string message) {
        int inc = 0;
        unordered_map <char, char> map;
        for (auto i : key) {
            if (i != ' ' && map.find(i) == map.end()) {
                map[i] = (char) (97 + inc);
                inc++;
            }
        }
        for (int i = 0; i < message.length(); ++i) {
            if (message[i] != ' ') message[i] = map[message[i]];
        }
        return message;
    }
};