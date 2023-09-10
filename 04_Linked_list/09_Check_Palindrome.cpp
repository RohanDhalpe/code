// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// private:
//    ListNode* reverseLinkedList(ListNode* head){
//        ListNode* prev=NULL;
//        ListNode* Nexxt=NULL;

//        while(head!=NULL){
//          Nexxt=head->next;
//          head->next=prev;
//          prev=head;
//          head=Nexxt;
//        }
//      return prev;
//    }

// public:
//     bool isPalindrome(ListNode* head) {
//         if(head==NULL || head->next==NULL) {return true;}

//         ListNode* slow=head;
//         ListNode* fast=head;

//         while(fast && fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//         }

//         slow->next=reverseLinkedList(slow->next);
//         slow=slow->next;

//         while(slow!=NULL){
//             if(slow->val!=head->val) { return false; }
//             slow=slow->next;
//             head=head->next;
//         }
//        return true; 
//     }
// };