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

int GetLengthOfLinkedList(Node* &head){
     Node* temp=head;
     int count=0;
     
     while(temp!=NULL){
          count++;
          temp=temp->next;
     }
  return count;
}

int main(){
    Node* head=NULL;
    insertAtHead(head,10);
    insertAtHead(head,15);
    insertAtTail(head,11);
    insertAtTail(head,45);
    insertAtTail(head,55);
    insertAtTail(head,65);
    display(head);
    
    cout<<GetLengthOfLinkedList(head);
    
    return  0;
}