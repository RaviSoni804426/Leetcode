class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> s;
        int n = words.size();
        int c = 0;
        for (int i = 0; i < n; i++) {
            s.insert(words[i]);
        }
        for (int i = 0; i < n; i++) {
            string rev = words[i];
            reverse(rev.begin(), rev.end());
            if (words[i] == rev)
                continue;
            if (s.find(rev) != s.end()) {
                c++;
                s.erase(words[i]);
            }
        }
            return c;
        }
    };