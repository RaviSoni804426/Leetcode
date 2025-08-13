class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        if (n < m) return {};

        vector<int> phash(26, 0);
        vector<int> shash(26, 0);
        vector<int> ans;
        for (int i = 0; i < m; i++) {
            phash[p[i] - 'a']++;
            shash[s[i] - 'a']++;
        }

        if (phash == shash) ans.push_back(0);
        for (int i = m; i < n; i++) {
            shash[s[i] - 'a']++;       
            shash[s[i - m] - 'a']--;   

            if (phash == shash) ans.push_back(i + 1 - m);
        }
        return ans;
    }
};
