class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int n=rungs.size();
        int count=0;
        int pre=0;
        for(int i=0;i<n;i++){
            count+=(rungs[i]-pre-1)/dist;
            pre=rungs[i];
        }
        return count;
    }
};
