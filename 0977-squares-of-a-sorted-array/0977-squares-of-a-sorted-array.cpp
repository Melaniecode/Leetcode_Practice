// 快速排序 O(n + nlog n)
class Solution {
public :
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            nums[i] *= nums[i];
        }
        
        sort(nums.begin(), nums.end());
        return nums;
    }
};

// bubble sort
// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();

//         for(int i = 0; i < n; i++) {
//             nums[i] = pow(nums[i], 2);
//         }
//         for(int i = 0; i < n - 1; i++) {
//             for(int j = 0; j < n - 1 - i; j++) {
//                 if(nums[j] > nums[j + 1]) {
//                     int temp = nums[j];
//                     nums[j] = nums[j + 1];
//                     nums[j + 1] = temp;
//                 }
//             }
//         }
//         return nums;
//     }
// };