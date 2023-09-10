#include<iostream>
using namespace std;

class Node{
   public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class stack{
    public:
    Node* head;
    int capacity;
    int length;

    stack(int capacity){
        this->capacity=capacity;
        length=0;
        head=NULL;
    }

    bool isFull(){
        return length==capacity;
    }
    bool isEmpty(){
        return head==NULL;
    }

    void push(int data){
        if(length==capacity){
            cout<<"Overflow";
            return;
        }
        Node* new_node=new Node(data);
        new_node->next=head;
        head=new_node;
        length++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Undeflow";
            return;
        }
        Node* Nextnode=head->next;
        head->next=NULL;
        head=Nextnode;
        length--;
    }

    int topElement(){
        if(head==NULL){
            cout<<"Undeflow";
            return -1;
        }
        return head->data;
    }
};



int main(){

    stack st(6);
    st.push(1);
    st.push(15);
    st.push(41);
    st.push(91);
    cout<<st.topElement()<<endl;
    st.pop();
    cout<<st.topElement()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<< st.isEmpty()<<endl;



    return 0;
}