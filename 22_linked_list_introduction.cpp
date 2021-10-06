#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

class node{
public:
    int data;
    node * next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head,int val){
    node * n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }

    node* ptr = head;
    while(ptr->next!=NULL){
        ptr  = ptr->next;
    }
    ptr->next = n;
}

void insertAtHead(node* &head , int val){
    node*  n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    n->next = head;
    head = n;
}


void display(node* head){
    node * ptr = head;
    while(ptr!=NULL){
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL" << endl;
}

bool search(node* head , int key){
    node* ptr = head;
    while(ptr!=NULL){
        if(ptr->data==key){
            return true;
        }
        ptr = ptr->next;
    }
    return false;
}

int main(){
    node * head = NULL;
    insertAtTail(head , 1);
    insertAtTail(head , 2);
    insertAtTail(head , 3);
    display(head);
    insertAtHead(head,5);
    display(head);
    cout << search(head,2) << endl;
    cout << search(head,6) << endl;
    return 0;
}