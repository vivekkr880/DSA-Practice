class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;

    void solve(vector<int>& candidates, int target, int index) {
        if (target == 0) {
            ans.push_back(current);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
            if (candidates[i] <= target) {
                current.push_back(candidates[i]);

                solve(candidates, target - candidates[i], i);

                current.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates, target, 0);
        return ans;
    }
};