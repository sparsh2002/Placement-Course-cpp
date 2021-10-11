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

void evenAfterOdd(node * &head){
    node * odd  =head;
    node * even = head->next;
    node * evenStart = even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;

    }

    odd->next = evenStart;
    if(odd->next==NULL){
        even->next= NULL;
    }
}

int main(){
    node * head = NULL;
    insertAtTail(head , 1);
    insertAtTail(head , 2);
    insertAtTail(head , 3);
    insertAtTail(head , 4);
    insertAtTail(head , 5);
    insertAtTail(head , 6);
    // insertAtTail(head , 7);
    display(head);
    evenAfterOdd(head);
    display(head);
    return 0;
}