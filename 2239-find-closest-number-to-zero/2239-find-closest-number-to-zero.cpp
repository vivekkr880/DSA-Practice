class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest=nums[0];
        for(int x:nums){
            if(abs(x)<abs(closest)){
                closest=x;
            }
            else if(abs(x)==abs(closest) && x>closest){
                closest=x;
            }
        }
        return closest;
    }
};

// class Solution {
// public:
//     int findClosestNumber(vector<int>& nums) {

//         int closest = nums[0];

//         for (int i = 0; i < nums.size(); i++) {

//             if (|nums[i]| < |closest|) { // mod is not use in c++ they not accecpt the mathemathic expression
//                 closest = nums[i];
//             }

//             else if (|nums[i]| == |closest| && nums[i] > closest) {
//                 closest = nums[i];
//             }
//         }

//         return closest;
//     }
// };