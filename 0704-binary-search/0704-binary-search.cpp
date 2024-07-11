//target必須是唯一值
//[left, right]
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while(left <= right) {
            int middle = (left+right)/2;
            if(target == nums[middle])
                return middle;
            else if(target < nums[middle])
                right = middle-1;
            else
                left = middle+1;
        }
        return -1;
    }
};

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
        
//         for(int i=0; i<nums.size(); i++) {
//             if(nums[i] == target) {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };