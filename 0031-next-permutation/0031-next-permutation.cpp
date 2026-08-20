class Solution {
public:
    vector<int>nextPermutation(vector<int>& A) {
        int ind = -1;
        int n = A.size();

        // Step 1: Find the breakpoint
        for (int i = n - 2; i >= 0; i--) {
            if (A[i] < A[i + 1]) {
                ind = i;
                break;
            }
        }

        // Step 2: If no breakpoint, this is the last permutation
        if (ind == -1) {
            reverse(A.begin(), A.end());
            return A;
        }

        // Step 3: Find the next greater element and swap
        for (int i = n - 1; i > ind; i--) {
            if (A[i] > A[ind]) {
                swap(A[i], A[ind]);
                break;
            }
        }

        // Step 4: Reverse the remaining part
        reverse(A.begin() + ind + 1, A.end());

        return A;
    }
};