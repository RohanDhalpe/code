/*class Solution {
public:
    int evalRPN(vector<string>&nums) 
    {
        stack<int> s ;
        for(int i = 0; i < nums.size(); i++)
        {      
            if(nums[i] == "+")
            {
                int x = s.top(); 
                s.pop();
                int y = s.top(); 
                s.pop();

                s.push(x + y) ;
            }
            else if(nums[i] == "-")
            {
                int x = s.top() ; 
                s.pop();
                int y = s.top() ; 
                s.pop();

                s.push(y - x) ;
            }
            else if(nums[i] == "*")
            {
                int x = s.top() ; 
                s.pop() ;
                int y = s.top() ; 
                s.pop() ;

                s.push(y * x) ;
            }
            else if(nums[i] == "/")
            {
                int x = s.top() ; 
                s.pop() ;
                int y = s.top() ; 
                s.pop() ;

                s.push(y / x) ;
            }
            else
            {
                s.push(stoi(nums[i])) ;
            }
        }
        return s.top() ;
    }
};*/

#include<iostream>
#include<math.h>
#include<stack>
using namespace std;

int calc(int v1,int v2,char op){
    if(op=='^') return pow(v1,v2);
    if(op=='+') return v1+v2;
    if(op=='*') return v1*v2;
    if(op=='/') return v1/v2;
    return v1-v2;
}

int EvalPostfix(string &str){
    stack<int>st;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(isdigit(ch)){
            st.push(ch-'0');
        }else{
            int v2=st.top();
            st.pop();
            int v1=st.top();
            st.pop();
            st.push(calc(v1,v2,ch));
        }
    }
    return st.top();
}




int main(){
 string str="231*+9-";
 cout<<EvalPostfix(str);
    return 0;
}