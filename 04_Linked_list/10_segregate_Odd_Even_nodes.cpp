// class Solution{
// public:
//     Node* divide(int N, Node *head)
//     {  
//         if(head==NULL)
//         return head;
        
     
//         Node* even=NULL;
//         Node* odd=NULL;
//         Node* e=NULL;
//         Node* o=NULL;
//         Node* temp=head;
//        while(temp!=NULL)
//        {
//            if(temp->data%2==0)
//            {
//                if(even==NULL)
//                {
//                    even=temp;
//                    e=temp;
//                }
//                else
//                {
//                    e->next=temp;
//                    e=e->next;
//                }
//            }
//            else
//            {
//                 if(odd==NULL)
//                {
//                    odd=temp;
//                    o=temp;
//                }
//                else
//                {
//                    o->next=temp;
//                    o=o->next;
//                }
//            }
           
//            temp=temp->next;
//        }
       
//        if(even==NULL)
//        return odd;
//        if(odd==NULL)
//        return even;
       
//        e->next=odd;
//        o->next=NULL;
//        return even;
//     }
// };