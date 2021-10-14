#include <iostream>
#include <stack>
using namespace std;

class queue{
    stack <int> s1;
    stack <int> s2;
public:
    void enqueue(int x){
        s1.push(x);
    }

    int dequeue(){
        if(s1.empty() and s2.empty()){
            cout << "Queue is empty" << endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
            }
        }

        int topVal = s2.top();
        s2.pop();
        return topVal;
    }

    bool empty(){
        if(s1.empty() and s2.empty()){
            return true;
        }
        return false;
    }

};

int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout << q.empty() << endl;
    while(!q.empty()){
        cout << q.dequeue() << " ";
    }cout << endl;
    cout << q.empty() << endl;
    q.enqueue(5);
    q.enqueue(6);
    cout << q.dequeue() << endl;
    q.enqueue(7);
    while(!q.empty()){
        cout << q.dequeue() << " ";
    }cout << endl;
    cout << q.empty() << endl;
    return 0;
}