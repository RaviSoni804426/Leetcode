class Solution {
public:
    string makeFancyString(string s) {
        int count=1;
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]) count++;
            else count=1;
            if(count>=3) continue;
            res+=s[i];
        }
        return res;

    }
};