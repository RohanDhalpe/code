
// class Solution
// { 
//    ListNode* merge(ListNode* l1,ListNode* l2)
//    {  
//        ListNode* ptr = new ListNode(0);
//        ListNode* curr_node=ptr;

//        while(l1!=NULL && l2!=NULL)
//        {
//            if(l1->val <= l2->val)
//            {
//                curr_node->next=l1;
//                l1=l1->next;
//            }
//            else
//            {
//                curr_node->next=l2;
//                l2=l2->next;
//            }

//            curr_node=curr_node->next;
//        }

//        while(l1!=NULL){
//            curr_node->next=l1;
//            curr_node=curr_node->next;
//            l1=l1->next;
//        }

//        while(l2!=NULL){
//         curr_node->next=l2;
//         curr_node=curr_node->next;
//           l2=l2->next;
//        }

//       return ptr->next;
//    }

//   public:
//     ListNode* sortList(ListNode* head) {
//         if(head==NULL || head->next==NULL) { return head; }

//         ListNode* temp=NULL;
//         ListNode* slow=head;
//         ListNode* fast=head;

//         while(fast && fast->next)
//         { 
//             temp=slow;
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         temp->next=NULL;

//         ListNode* l1=sortList(head);
//         ListNode* l2=sortList(slow);

//         return merge(l1,l2);
//     }
// };