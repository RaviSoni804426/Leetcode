#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff = INT_MIN;
        bool flag = false;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] > nums[i] && (nums[j] - nums[i] > maxDiff)) {
                    maxDiff = nums[j] - nums[i];
                    flag = true;
                }
            }
        }
        
        return flag ? maxDiff : -1;
    }
};
