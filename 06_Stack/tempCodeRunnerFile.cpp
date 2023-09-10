#include <iostream>
#include <math.h>
#include <stack>
#include<string>
using namespace std;

string prefix_to_postfix(string &pre){
  stack<string>st;
  reverse(pre.begin(),pre.end());

  for(int i=0;i<pre.size();i++)
  {
    if(isdigit(pre[i])){
        st.push(to_string(pre[i]-'0'));
    }else
    {
        string v1=st.top();
        st.pop();
        string v2=st.top();
        st.pop();
        string newexp=v1+v2+pre[i];
        st.push(newexp);
    }
  }
  return st.top();
}
int main(){
    string s = "*+31-15";
    cout<<prefix_to_postfix(s);
    return 0;
}