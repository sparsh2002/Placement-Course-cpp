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

void deletion(node * &head , int val){
    node * ptr = head;
    if(head==NULL){
        return;
    }
    if(ptr->data == val){
        head = ptr->next;
        return;
    }
    while((ptr->next)->data != val){
        ptr = ptr->next;
    }
    ptr->next = (ptr->next)->next;
}

node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    if(head==NULL || head->next==NULL){
        return head;
    }
    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

node * reverseRecursive(node* &head){

    if(head==NULL || head->next == NULL){
        return head;
    }

    node *newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

int main(){
    node * head = NULL;
    insertAtTail(head , 1);
    insertAtTail(head , 2);
    insertAtTail(head , 3);
    insertAtTail(head , 4);
    display(head);
    // head = reverse(head);
    head = reverseRecursive(head);
    display(head);
    return 0;
}