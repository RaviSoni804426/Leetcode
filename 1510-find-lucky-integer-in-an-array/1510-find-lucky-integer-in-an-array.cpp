class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        for(int i:arr){
            mp[i]++;
        }
        int lucky = -1;
        for(auto itr:mp){
            if(itr.first == itr.second){
                lucky = itr.first;
            }
        }
        return lucky;
    }
};