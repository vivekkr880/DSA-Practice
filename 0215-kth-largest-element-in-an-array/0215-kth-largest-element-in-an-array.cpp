// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         int n = nums.size();

//         for (int i = 0; i < k; i++) {
//             int maxIndex = i;

//             for (int j = i + 1; j < n; j++) {
//                 if (nums[j] > nums[maxIndex]) {
//                     maxIndex = j;
//                 }
//             }

//             int temp = nums[i];
//             nums[i] = nums[maxIndex];
//             nums[maxIndex] = temp;
//         }

//         return nums[k - 1];
//     }
// };  

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int, vector<int>, greater<int>> minHeap;

//         for (int x : nums) {
//             minHeap.push(x);

//             if (minHeap.size() > k) {
//                 minHeap.pop();
//             }
//         }

//         return minHeap.top();
//     }
// };

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);

            if (pq.size() > k) {
                pq.pop();
            }
        }

        return pq.top();
    }
};