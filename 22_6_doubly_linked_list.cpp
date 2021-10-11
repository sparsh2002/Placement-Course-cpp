#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* prev;
    node* next;

    node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    head = n;
}

void display(node* head){
    node* ptr = head;
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }cout << endl;
}


void insertAtTail(node* &head , int val){
    node* ptr = head;
    node* n = new node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next =n;
    n->prev = ptr;
}

void deleteAtHead(node* &head, int val){
    node* todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}

void deletion(node* &head, int pos){
    node* ptr = head;
    if(pos==1){
        deleteAtHead(head,pos);
        return;
    }
    int count =1;

    while(ptr!=NULL && count!=pos){
        ptr = ptr->next;
        count++;
    }
    ptr->prev->next = ptr->next;
    if(ptr->next!=NULL){
        ptr->next->prev = ptr->prev;
    }
    delete ptr;
}
int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,5);
    display(head);
    deletion(head,3);
    display(head);
    deletion(head, 1);
    display(head);
    return 0;
}