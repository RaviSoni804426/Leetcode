class Solution {
public:
    int countKDifference(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        int count=0;

        for(int i=0;i<arr.size();i++)
        {
            if(mp.find(arr[i]+k)!=mp.end())
            {
                count+=mp[arr[i]+k];
            }
            if(mp.find(arr[i]-k)!=mp.end())
            {
                count+=mp[arr[i]-k];
            }
            mp[arr[i]]++;
        }
        return count;
    }
};