class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        string v(n, ' ');  
        
        for(int i = 0; i < n; i++) {
            v[indices[i]] = s[i];  
        }
        
        return v;
    }
};
