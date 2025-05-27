class Solution {
public:
    int atMostKDistinct(vector<int>& A, int K) {
        int i = 0, res = 0;
        unordered_map<int, int> m;
        for (int j = 0; j < A.size(); ++j) {
            if (m[A[j]] == 0) K--;
            m[A[j]]++;
            while (K < 0) {
                m[A[i]]--;
                if (m[A[i]] == 0) K++;
                i++;
            }
            res += j - i + 1;
        }
        return res;
    }

    int subarraysWithKDistinct(vector<int>& A, int K) {
        return atMostKDistinct(A, K) - atMostKDistinct(A, K - 1);
    }
};
