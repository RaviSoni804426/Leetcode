class Solution {
public:
   int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp = {{0, 1}};
    int sum = 0, ans = 0;

    for (int num : nums) {
        sum += num;
        ans += mp[sum - k];
        mp[sum]++;
    }

    return ans;
}
};