#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    int smallestDiviso(vector<int>& nums, int div) {
        int sum = 0;
        for (int num : nums) {
            sum += ceil((double)num / div);
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int answer = high;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (smallestDiviso(nums, mid) <= threshold) {
                answer = mid;         
                high = mid - 1;       
            } else {
                low = mid + 1;        
            }
        }

        return answer;
    }
};
