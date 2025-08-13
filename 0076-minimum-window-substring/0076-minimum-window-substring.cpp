class Solution {
public:
    string minWindow(string str, string t) {
        if (str.empty() || t.empty() || t.size() > str.size()) return "";

        unordered_map<char, int> need, window;
        for (char c : t) need[c]++;

        int required = need.size();
        int formed = 0;
        int left = 0, start = 0, minLen = INT_MAX;

        for (int right = 0; right < (int)str.size(); ++right) {
            char c = str[right];
            if (need.count(c)) {
                window[c]++;
                if (window[c] == need[c]) formed++;
            }

            while (formed == required) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }
                char lc = str[left];
                if (need.count(lc)) {
                    window[lc]--;
                    if (window[lc] < need[lc]) formed--;
                }
                left++;
            }
        }
        return (minLen == INT_MAX) ? "" : str.substr(start, minLen);
    }
};
