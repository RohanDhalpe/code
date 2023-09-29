#include<iostream>
#include<climits>
using namespace std;

class stack
{
   public:
   int size;
   int *arr; 
   int top;
   
    stack(int size)
    {
      this->size=size;
      arr=new int[size];
      top=-1;
    }

    void push(int data){
        if(size-1==top){
            cout<<"Stack Overflow";
        }
        top++;
        arr[top]=data;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow";   
        }
       top--;
    }

    int topElement(){
        if(top==-1){
            cout<<"Stack Underflow";
            return INT_MIN;
        }
        return arr[top];
     }

    bool isEmpty(){
        return top==-1;
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