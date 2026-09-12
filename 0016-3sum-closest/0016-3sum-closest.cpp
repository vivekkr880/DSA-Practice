class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long closest_sum = INT_MAX; 
        
        for (int i = 0; i < n; i++) {
            int j = i + 1;
            int k = n - 1;
            
            while (j < k) {
                long long current_sum = (long long)nums[i] + nums[j] + nums[k];
                
                if (current_sum == target) {
                    return current_sum;
                }
                
                if (abs(current_sum - target) < abs(closest_sum - target)) {
                    closest_sum = current_sum;
                }
                
                if (current_sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        
        return closest_sum;
    }
};
