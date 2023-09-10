// Node* mergeList(Node* l1,Node*l2){
// 	Node* ptr=new Node(0);
// 	Node* curr=ptr;

// 	while(l1!=NULL && l2!=NULL){
// 		if(l1->data<=l2->data){
// 			curr->child=l1;
// 			l1=l1->child;
// 			curr=curr->child;
// 		}else{
// 			curr->child=l2;
// 			l2=l2->child;
// 			curr=curr->child;
// 		}
// 	}
// 	//   if(l1) curr->child = l1; 
//     //   else curr->child = l2; 

// 	      while(l1){
// 	        curr->child=l1;
// 			l1=l1->child;
// 			curr=curr->child;
// 	      }

// 	      while(l2){
// 		    curr->child=l2;
// 			l2=l2->child;
// 			curr=curr->child;
// 	     }

//     return ptr->child;
// }

// Node* flattenLinkedList(Node* head) 
// {
// 	if(head==NULL || head->next==NULL){
// 		return head;
// 	}
// 	Node* li=flattenLinkedList(head->next);
// 	head->next=NULL;
// 	Node* fhead=mergeList(head,li);
// 	return fhead;
// }