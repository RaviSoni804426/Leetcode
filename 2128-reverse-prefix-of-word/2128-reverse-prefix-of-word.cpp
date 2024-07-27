class Solution {
public:
    string reversePrefix(string word, char ch) {
        int l=0;
      for(int r=0;r<word.size();r++){
        if(word[r]==ch){
            while(l<=r){
                swap(word[r],word[l]);
                l++;
                r--;
            }
            return word;
        }
      }
      return word;
    }
};