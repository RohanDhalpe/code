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

void deleteAlternateNode(Node *head){
     Node* curr_node=head;
     
     while(curr_node!=NULL && curr_node->next!=NULL)
     {
        Node* temp=curr_node->next;
        curr_node->next=curr_node->next->next;
        free(temp);
        curr_node=curr_node->next;
     }
}

void deleteduplicate(Node *head){
    Node* curr_node=head;
    while(curr_node){
        while(curr_node->next && curr_node->val==curr_node->next->val)
        {  
            Node* temp=curr_node->next;
            curr_node->next=curr_node->next->next;
            free(temp);
        }
       curr_node=curr_node->next; 
    }
}

int main(){
   
   Linkedlist ll;
   ll.insertAtTail(1);
   ll.insertAtTail(2);
   ll.insertAtTail(2);
   ll.insertAtTail(3);
   ll.insertAtTail(3);
   ll.insertAtTail(4);
   ll.insertAtTail(4);
   ll.insertAtTail(5);
   ll.display();
   deleteduplicate(ll.head);
   ll.display();
   
   
 



    return 0;
}