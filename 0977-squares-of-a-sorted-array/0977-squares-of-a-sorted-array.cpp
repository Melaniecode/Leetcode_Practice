// i指向起始位置，j指向终止位置
// time O(n), space O(n)
class Solution {
public : 
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> result(nums.size(), 0); // 建立一個新vector，size和原本一樣，值都先填成0
        for(int i = 0, j = nums.size() - 1; i <= j;) {
            if(nums[i]*nums[i] < nums[j]*nums[j]) {
                result[n--] = nums[j]*nums[j];
                j--;
             }   
            else {
                result[n--] = nums[i]*nums[i];
                i++;
            }
        }
        return result;
    }
};
// //O(n + nlog n)
// class Solution {
// public :
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 0; i < n; i++) {
//             nums[i] *= nums[i];
//         }
        
//         // quick sort O(nlogn)
//         sort(nums.begin(), nums.end());
//         return nums;
//     }
// };

// //bubble sort
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