#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n = arr.size();
        stack<int> st;
        vector<int> ngi(n, n); 
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                ngi[i] = st.top();
            }
            st.push(i);
        }

        vector<int> ans;
        for (int i = 0; i <= n - k; i++) {
            int j = i;
            int mx = arr[j];
            while (j < i + k) {
                mx = max(mx, arr[j]);
                if (ngi[j] < i + k) {
                    j = ngi[j];
                } else {
                    break;
                }
            }
            ans.push_back(mx);
        }

        return ans;
    }
};
