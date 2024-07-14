class Solution {
public:
    vector<int> findWordsContaining(vector<string>& v, char c) {
        vector<int>p;
        for(int i=0;i<v.size();i++){
            if(v[i].find(c)!=string::npos)p.push_back(i);
        }
        return p;
    }
};