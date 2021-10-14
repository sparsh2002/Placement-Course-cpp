#include <iostream>
using namespace std;
#define n 100
class queue{
    int * arr;
    int front;
    int back;
public:
    queue(){
        arr = new int[n];
        front = -1;
        back  = -1;
    }

    void enqueue(int x ){
        if(back==n-1){
            cout << "Queue is full!" << endl;
            return;
        }
        
        back++;
        arr[back] = x;
        if(front==-1){
            front++;
        }
    }

    void dequeue(){
        if(front==-1 || front>back){
            cout << "Queue is empty!" << endl;
            return;
        }
        front++;
    }

    int peek(){
        return arr[front];
    }

    bool empty(){
        if(front==back){
            return 1;
        }
        return 0;
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
        cout << q.peek() << " ";
        q.dequeue();
    }
    cout << q.peek() << " ";
    cout << endl;
    cout << q.empty() << endl;
    q.enqueue(5);
    q.enqueue(6);
    cout << q.empty() << endl;
    while(!q.empty()){
        cout << q.peek() << " ";
        q.dequeue();
    }
    cout << q.peek() << " ";
    cout << endl;
    cout << q.empty() << endl;
    return 0;
}