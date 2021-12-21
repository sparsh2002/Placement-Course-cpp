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

class Queue{
private:
    stack <int> st1;
    stack <int> st2;
public:
    void push(int x){
        if(st1.empty()) st1.push(x);
        else{
            int y;
            while(!st1.empty()){
                y = st1.top();
                st1.pop();
                st2.push(y);
            }
            st2.push(x);
            while(!st2.empty()){
                y = st2.top();
                st2.pop();
                st1.push(y);
            }
        }
    }

    void pop(){
        st1.pop();
    }

    int size(){
        return st1.size();
    }

    int front(){
        if(st1.empty()) return -1;
        return st1.top();
    }

    bool empty(){
        if(st1.empty()) return true;
        return false;
    }

};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    Queue q;
    q.push(10);
    cout << q.front() << " ";
    q.push(20);
    cout << q.front() << " ";
    q.push(30);
    cout << q.front() << " ";
    q.push(40);
    cout << q.front() << " ";
    q.pop();
    q.pop();
    q.pop();
    cout << q.front() << " ";
     
    return 0;
}