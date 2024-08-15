class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return true;
        vector<int>v;
        for(auto ch:s){
            if(isalnum(ch)){
                v.push_back(tolower(ch));
            }
        }
        int begin=0;
        int end=v.size()-1;
        while(begin<end){
            if(v[begin]!=v[end]){
                return false;
            }
            begin++;
            end--;
        }
        return true;
    }
};