#include<bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue <int> q1;
    queue <int> q2;
public:
    Stack(){
        N=0;
    }

    void push(int x){
        q1.push(x);
        N++;
    }

    void pop(){
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        queue <int> temp;
        temp = q1;
        q1 = q2;
        q2 = temp;
        N--;
    }

    int top(){
        if(q1.empty()){
            return -1;
        }
        queue <int> temp = q1;
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q1 = temp;
        return ans;
    }

    int size(){
        return N;
    }

};


int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.top() << endl;
    st.pop();
     cout << st.top() << endl;
    st.pop();
     cout << st.top() << endl;
    st.pop();
    cout << st.size() << endl;
     cout << st.top() << endl;
    st.pop();
    cout << st.size() << endl;
    return 0;
}