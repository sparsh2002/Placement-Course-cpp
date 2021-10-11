#include <iostream>
using namespace std;
#define n 100

class stack{
    int * arr;
    int top;

public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int val){
        if(top==n-1){
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop(){
        if(top==-1){
            cout<< "no elements to pop" << endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout << "stack empty" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        if(top==-1){
            return 1;
        }
        return 0;
    }

};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;

    return 0;
}
