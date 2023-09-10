#include<iostream>
using namespace std;

class Node{
   public:
    int val;
    Node* next;

    // Constructor
    Node(int data){
       val=data;
       next=NULL;
    }
};

void insertAtHead(Node* &head,int val)
{
   Node* new_node=new Node(val); //TC-O(1)
    new_node->next=head;
    head=new_node;

}

void insertAtTail(Node* &head,int val)
{ 
   Node*temp=head;
   while(temp->next!=NULL)   // TC-O(N)
   { 
        temp=temp->next;
   }
   Node* new_node=new Node(val);
   temp->next=new_node;
}

void display(Node* head){
   Node* temp=head;
   while(temp!=NULL)
   {
    cout<<temp->val<<"->";
    temp=temp->next;
   }
   cout<<"NULL"<<endl;
}

void insertAtPosition(Node* &head,int val,int pos){
     if(pos==0){ insertAtHead(head,val); return;}
     
     Node* temp=head;
     int curr_pos=0;   //TC-O(pos)
     while(curr_pos<pos-1)
     {
        temp=temp->next;
        curr_pos++;
     }
     Node* new_node=new Node(val);
     new_node->next=temp->next;
     temp->next=new_node;
}

void updateAtPosition(Node* &head,int val,int k){
     Node* temp=head;
     int curr_pos=0;
     while(curr_pos<k){   // TC-O(k)
          temp=temp->next;
          curr_pos++;
     }
     temp->val=val;
}

void deleteAtHead(Node* &head){
     Node* temp=head;
     head=head->next;
     free(temp);
}

void deleteAttail(Node* &head){
     Node* sec_last=head;
     int curr_pos=0;
     
     while(sec_last->next->next!=NULL){  //TC-O(N)
         sec_last=sec_last->next; 
     }
     
     Node* temp=sec_last->next->next;
     sec_last->next=temp;
     free(temp);
}

void deleteatposition(Node* &head,int pos){
     if(pos==0){ deleteAtHead(head); return;}
     
     int curr_pos=0;
     Node* prev=head;
     
     while(curr_pos!=pos-1){  //O(N)
        prev=prev->next; 
        curr_pos++;
     }
     
     Node* temp=prev->next;
     prev->next=prev->next->next;
     free(temp);
     
}

int main(){
    Node* head=NULL;
    insertAtHead(head,10);
    display(head);
    insertAtHead(head,15);
    display(head);
    insertAtTail(head,11);
    display(head);
    insertAtPosition(head,99,1);
    display(head);
    updateAtPosition(head,77,2);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAttail(head);
    display(head);
    insertAtTail(head,45);
    insertAtTail(head,55);
    insertAtTail(head,65);
    display(head);
    deleteatposition(head,2);
    display(head);
    
    return  0;
}