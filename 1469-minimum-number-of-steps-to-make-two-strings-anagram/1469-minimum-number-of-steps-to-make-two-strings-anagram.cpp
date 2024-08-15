class Solution {
public:
    int minSteps(string s, string t) {
   int a[26]={};
   int result=0;
   for(int i=0;i<s.length();i++){
    a[s[i]-'a']++;
    a[t[i]-'a']--;

   }
   for(int count: a)
   result+=max(0,count);
   return result;
    }
};
