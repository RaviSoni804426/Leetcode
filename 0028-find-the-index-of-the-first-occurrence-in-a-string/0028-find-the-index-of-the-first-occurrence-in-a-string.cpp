class Solution {
public:
   int strStr(string h, string n) {
    int m = h.size();
    int k = n.size();

    if (k == 0) return 0; 

    for (int i = 0; i <= m - k; i++) { 
        if (h.substr(i, k) == n) {
            return i; 
        }
    }
    
    return -1; 
   }
};