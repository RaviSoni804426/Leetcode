#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& h) {
        int s = 0;             
        int e = h.size() - 1;   
        int maxarea = 0;

        while (s < e) {
            int area = min(h[s], h[e]) * (e - s);
            maxarea = max(maxarea, area);

            
            if (h[s] < h[e]) {
                s++;
            } else {
                e--;
            }
        }

        return maxarea;
    }
};
