
/*

class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        input.push(x);          //push Efficient
    }

    int dequeue() {
        while(!input.empty()){
            output.push(input.top());
            input.pop();
        }
        int res=output.top();
        output.pop();
        while(!output.empty()){
            input.push(output.top());
            output.pop();
        }
        return res;
    }
};


*/
