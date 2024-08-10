class Solution {
public:
    bool isCircularSentence(string sentence) {
        bool ans=false;
        if(sentence[0]==sentence[sentence.size()-1]) ans=true;
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                if(sentence[i-1]!=sentence[i+1]) return false;
            }
        }
        return ans;
    }
};