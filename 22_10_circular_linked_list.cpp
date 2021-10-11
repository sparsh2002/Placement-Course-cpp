#include <iostream>
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

void insertAtHead(node* &head , int val){
    node * n = new node(val);
    if(head==NULL){
        n->next = n;
        head = n;
        return;
    }

    node * ptr = head;
    while(ptr->next!=head){
        ptr = ptr->next;
    }

    n->next = head;
    ptr->next = n;
    head = n;

}

void insertAtTail(node * &head , int val){
    if(head==NULL){
        insertAtHead(head, val);
        return ;
    }

    node * n = new node(val);
    node * ptr = head;

    while(ptr->next!=head){
        ptr = ptr->next;
    }
    ptr->next = n;
    n->next = head;
}


void display(node * head){
    node * ptr = head ;
    do
    {
        cout<< ptr->data << " ";
        ptr = ptr->next;
    } while (ptr!=head);

    cout <<endl;
    
}

void deleteAtHead(node* &head){
    node * ptr = head;
    while(ptr->next!=head){
        ptr = ptr->next;
    }
    node  * todelete = head;
    ptr->next = head->next;
    head = ptr->next;
}


void deletion(node * & head , int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    int count = 1;
    node * ptr = head;
    while(count!=pos-1){
        ptr = ptr->next;
        count++;
    }
    node * todelete = ptr->next;
    ptr->next = ptr->next->next;

}

int main(){
    node * head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,5);
    display(head);
    deletion(head,1);
    display(head);
    return 0;
}