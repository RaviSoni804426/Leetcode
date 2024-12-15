class Solution {
public:
    bool closeStrings(string str1, string str2) {
        if (str1.size() != str2.size()) return false;

        unordered_map<char, int> mp1, mp2;
        for (char ch : str1) {
            mp1[ch]++;
        }
        for (char ch : str2) {
            mp2[ch]++;
        }

        // Check if both strings have the same unique characters
        for (auto x : mp1) {
            char ch = x.first;
            if (mp2.find(ch) == mp2.end()) return false;
        }
        for (auto x : mp2) {
            char ch = x.first;
            if (mp1.find(ch) == mp1.end()) return false;
        }

        // Count frequency of frequencies
        unordered_map<int, int> h1, h2;
        for (auto x : mp1) {
            h1[x.second]++;
        }
        for (auto x : mp2) {
            h2[x.second]++;
        }

        // Compare the frequency maps
        for (auto x : h1) {
            int key = x.first;
            if (h2.find(key) == h2.end() || h1[key] != h2[key]) {
                return false;
            }
        }
        return true;
    }
};
