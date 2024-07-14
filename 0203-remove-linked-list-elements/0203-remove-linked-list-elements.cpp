/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// 直接使用原來的來刪除。
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // 頭結點
        while (head != NULL && head->val == val) { 
            ListNode* tmp = head;
            head = head->next;
            delete tmp;
        }

        // 非頭結點
        ListNode* cur = head;
        while (cur != NULL && cur->next!= NULL) {
            if (cur->next->val == val) {
                ListNode* tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            } else {
                cur = cur->next;
            }
        }
        return head;
    }
};

// fast：找不含val的新值
// slow：放新值，並update位置
// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int slow = 0;
//         for(int fast=0; fast < nums.size(); fast++) {
//             if(val != nums[fast]) {
//                 nums[slow] = nums[fast];
//                 slow++; // nums[slow++] = nums[fast];
//             }
//         }
//         return slow;
//     }
// };