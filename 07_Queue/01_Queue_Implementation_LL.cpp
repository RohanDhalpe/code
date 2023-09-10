#include<iostream>
using namespace std;

class Node{
   public:
     int data;
     Node* next;

     Node(int data){
       this->data=data;
       this->next=NULL;
     }
};

class Queue{
  public:
   Node* head;
   Node* tail;
   int size;

   Queue(){
     head=NULL;
     tail=NULL;
     size=0;
   }

   void enqueue(int data)
   {
     Node* temp=new Node(data);

     if(head==NULL){
        head=tail=temp;
     }else{
        tail->next=temp;
        tail=temp;
     }
     size++;
   }

   void dequeue()
   {
     if(head==NULL){ return ; }
     Node* oldhead=head;
     Node* newhead=head->next;
     head=newhead;
     if(head==NULL){tail=NULL;}
     delete oldhead;
     size--;
   }

   int getSize(){
    return size;
   }

   bool isEmpty(){
    return head==NULL;
   }

   int front(){
        if(head==NULL){return -1;}
    return head->data;
   }
};


int main(){
     Queue q;
     q.enqueue(5);
     q.enqueue(15);
     q.enqueue(25);
     q.enqueue(35);
     q.dequeue();
     
     while(!q.isEmpty()){
          cout<<q.front()<<" ";
          q.dequeue();
     }

    return 0;
}