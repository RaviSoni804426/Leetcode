class Solution {
public:
    string reverseWords(string s) {
        int length=s.size();
        vector<pair<int,int>>wordpositions;
        int i=0;
         string result = "";
        while(i<length){
            while(i<length && s[i]==' ') i++;
            if(i==length)break;
            int start=i;
            while (i < length && s[i] != ' ') i++;
            int end = i - 1; 
            wordpositions.push_back({start,end});
        }
        for(int j=wordpositions.size()-1;j>=0;--j){
            string word=s.substr(wordpositions[j].first,wordpositions[j].second - wordpositions[j].first + 1);
            result+=word;
            if(j!=0) result+=" ";
        }
        return result;
      
    }
};