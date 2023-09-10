#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    queue<int> q;
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);
    q.push(65);

    stack<int>s;

    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}