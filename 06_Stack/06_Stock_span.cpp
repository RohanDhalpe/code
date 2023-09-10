#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> findStockSpans(vector<int>& prices) {
    vector<int>res;
    stack<int>s;
    s.push(0);
    res.push_back(1);

    for(int i=1;i<prices.size();i++)
    {
        while(!s.empty() && prices[i]>prices[s.top()]){
            s.pop();
        }
        if(s.empty()){
            res.push_back(i+1);
        }else{
            res.push_back(i-s.top());
        }
        s.push(i);
    }
  return res;
}

int main(){
        vector<int> prices={4,0,6,7,3,1,2};
        
        vector<int> res=findStockSpans(prices);
        for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
        return 0;
    }