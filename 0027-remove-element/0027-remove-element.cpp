// fast：找不含val的新值
// slow：放新值，並update位置

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0;
        for(int fast=0; fast < nums.size(); fast++) {
            if(val != nums[fast]) {
                nums[slow] = nums[fast];
                slow++; // nums[slow++] = nums[fast];
            }
        }
        return slow;
    }
};
// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int size = nums.size();
//         for (int i=0; i<size; i++) {
//             if (nums[i] == val) { 
//                 for (int j = i+1; j < size; j++) {
//                     nums[j-1] = nums[j]; // 全都前移一格
//                 }
//                 i--; 
//                 size--;
//             }
//         }
//         return size;
//     }
// };