class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Check rows
        for (int i = 0; i < n; i++) {
            vector<int> seen(n + 1, 0);

            for (int j = 0; j < n; j++) {
                int num = matrix[i][j];

                if (seen[num] == 1)
                    return false;

                seen[num] = 1;
            }
        }

        // Check columns
        for (int j = 0; j < n; j++) {
            vector<int> seen(n + 1, 0);

            for (int i = 0; i < n; i++) {
                int num = matrix[i][j];

                if (seen[num] == 1)
                    return false;

                seen[num] = 1;
            }
        }

        return true;
    }
};