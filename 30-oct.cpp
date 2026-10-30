// class NumArray {
// private:
//     vector<int> nums;
//     vector<int> prefixSum;
// public:

//     NumArray(vector<int>& nums) {
//         this->nums = nums;
//         prefixSum.push_back(nums[0]);

//         for(int  i =1 ; i< nums.size(); i++){
//             prefixSum.push_back(prefixSum[i-1]+ nums[i]);
//         }

//     }

//     int sumRange(int left, int right) {
//         int sum = prefixSum[right] - prefixSum[left] + nums[left];
//         return  sum;

//     }
// };

// /**
//  * Your NumArray object will be instantiated and called as such:
//  * NumArray* obj = new NumArray(nums);
//  * int param_1 = obj->sumRange(left,right);
//  */

//  class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int n = nums.size();

//         vector<int> ans;
//         // ans[0]=nums[0];
//         ans.push_back(nums[0]);
//         for(int i=1; i< n;i++){
//             ans.push_back(ans[i-1] + nums[i]);
//         }
//         return ans;

//     }
// };