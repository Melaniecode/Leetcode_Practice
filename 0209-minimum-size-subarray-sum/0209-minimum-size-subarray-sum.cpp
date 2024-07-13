// time O(2n) -> O(n)
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int left = 0;
        int final_size = INT_MAX;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];

            while (sum >= target) {
                final_size = min(final_size, right - left + 1); 
                sum -= nums[left]; //sum -= nums[left++];
                left++; //
            }
        }
        return final_size == INT_MAX ? 0 : final_size;
    }
};


// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int sum = 0;
//         int size = 0;
//         int final_size = INT_MAX;
//         for(int i = 0; i < nums.size(); i++) {
//             size = 0;
//             sum = 0;
//             for(int j = i; j < nums.size(); j++){
//                 sum += nums[j];
//                 size++;
//                 if(sum >= target) {
//                     if (size < final_size) {
//                         final_size = size;
//                     }
//                     break;
//                 }
//             }
//         }
//         return final_size == INT_MAX ? 0 : final_size;
//     }
// };