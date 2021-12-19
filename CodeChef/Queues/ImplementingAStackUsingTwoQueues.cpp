#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define rep(i,a,b) for(int i=a ; i<b ; i++)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);

class Stack{
private:
    queue <int> q1;
    queue <int> q2;
public:
    void push(int x){
        q1.push(x);
    }

    int pop(){
        if(q1.empty()) return -1;
        int x;
        while(q1.size()>1){
            x = q1.front();
            q1.pop();
            q2.push(x);
        }
        x = q1.front();
        q1.pop();
        swap(q1,q2);
        return x;
    }

    int top(){
        if(q1.empty()) return -1;
        int x;
        while(q1.size()>1){
            x = q1.front();
            q1.pop();
            q2.push(x);
        }
        x = q1.front();
        q2.push(x);
        swap(q1,q2);
        return x;
    }

    bool empty(){
        if(q1.empty()) return true;
        return false;
    }

    int size(){
        return q1.size();
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // Implementing stack using two queues
    
    Stack  st;
    cout <<  st.empty() << " ";
    st.push(10);
    cout << st.top() << " ";
    st.push(20);
    st.push(30);
    cout << st.size() << " ";
    st.push(40);
    cout << st.top() << " ";
    st.pop();
    st.pop();
    cout << st.top() << " ";
    cout <<  st.empty() << " ";
    return 0;
}