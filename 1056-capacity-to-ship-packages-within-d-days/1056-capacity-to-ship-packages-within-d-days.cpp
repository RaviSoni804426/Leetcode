#include <vector>
#include <numeric>      
#include <algorithm>    

class Solution {

    bool canShip(int cap, const std::vector<int>& wt, int days) {
        int usedDays = 1;        
        int load = 0;            

        for (int w : wt) {
            if (load + w > cap) {   
                ++usedDays;
                load = 0;
            }
            load += w;
            if (usedDays > days) return false;   
        }
        return true;
    }

public:
    int shipWithinDays(std::vector<int>& weights, int days) {
        int low  = *std::max_element(weights.begin(), weights.end());   
        int high = std::accumulate(weights.begin(), weights.end(), 0);  
        int ans  = high;                                                

        while (low <= high) {
            int mid = low + (high - low) / 2;   

            if (canShip(mid, weights, days)) {  
                ans  = mid;
                high = mid - 1;
            } else {                            
                low  = mid + 1;
            }
        }
        return ans;
    }
};
