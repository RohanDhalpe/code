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
class Linkedlist{
  public:
   Node* head;

   Linkedlist(){
    head=NULL;
   }
    
   void insertAtTail(int val)
   {
    Node* new_node=new Node(val);

    if(head==NULL){
      head=new_node;
      return;
    }

    Node*  temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;

   }

   void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }cout<<"NULL";
    cout<<endl;
   }
};

Node* Reverselinkedlist(Node* &head)
{
   Node* prev=NULL;
   Node* curr=head;

   while(curr!=NULL){
     Node* nextptr=curr->next;
     curr->next=prev;
     prev=curr;
     curr=nextptr;
   }
   Node* new_head=prev;
   return new_head;
}

Node* ReversellRecursion(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    Node* new_head=ReversellRecursion(head->next);
    head->next->next=head;
    head->next=NULL;
}
int main(){
   
   Linkedlist ll;
   ll.insertAtTail(1);
   ll.insertAtTail(2);
   ll.insertAtTail(45);
   ll.insertAtTail(3);
   ll.insertAtTail(4);
   ll.insertAtTail(6);
   ll.display();

   ll.head=Reverselinkedlist(ll.head);
   ll.display();

    return 0;
}