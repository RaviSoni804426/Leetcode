class Solution {
public:
   
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
       for(string words:words){
        string rword=words;
        reverse(rword.begin(),rword.end());
        if(words==rword){
            return words;
        }
        
       }
       return "";
    }
};