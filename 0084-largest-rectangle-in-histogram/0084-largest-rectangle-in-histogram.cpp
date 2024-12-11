class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        vector<int> nsi(n), psi(n);
        stack<int> st, gt;

        nsi[n - 1] = n;
        st.push(n - 1);
        for (int i = n - 2; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            nsi[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        psi[0] = -1;
        gt.push(0);
        for (int i = 1; i < n; i++) {
            while (!gt.empty() && arr[gt.top()] >= arr[i]) gt.pop();
            psi[i] = gt.empty() ? -1 : gt.top();
            gt.push(i);
        }

        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            int h = arr[i];
            int b = nsi[i] - psi[i] - 1;
            int area = h * b;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};
