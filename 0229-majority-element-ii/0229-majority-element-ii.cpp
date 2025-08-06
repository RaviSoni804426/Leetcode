class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
    
        for (int num : nums) {
            mp[num]++;
        }

        vector<int> mele;
        int threshold = n / 3;
        for (auto& pair : mp) {
            if (pair.second > threshold) {
                mele.push_back(pair.first);
            }
        }

        return mele;
    }
};
