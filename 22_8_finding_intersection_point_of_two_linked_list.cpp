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

void linker(node* &head1 , node* &head2 , int k){
    node* ptr1  = head1;
    node* ptr2 = head2;
    int count = 1;
    while(count<k){
        ptr1 = ptr1->next;
        count++;
    }
    while(ptr2->next!= NULL){
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr1->next;
}

int length(node * head){
    int l=0;
    node* ptr = head;
    while(ptr!=NULL){
        ptr = ptr->next;
        l++;
    }
    return l;
}

int intersection(node* head1 , node* head2){
    node * ptr1 = head1;
    node * ptr2 = head2;
    int l1 = length(head1);
    int l2 = length(head2);
    int k = abs(l1-l2);
    int count = 1;
    if(l1>l2){
        while(count<=k){
            ptr1 = ptr1->next;
            count++;
        }
        while(ptr1->next!=NULL){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            if(ptr1==ptr2){
                return ptr1->data;
            }
        }
        return 0;
    }else{
        while(count<=k){
            ptr2 = ptr2->next;
            count++;
        }
        while(ptr2->next!=NULL){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            if(ptr1==ptr2){
                return ptr1->data;
            }
        }
        return 0;
    }
    
}

int main(){
    node * head1 = NULL;
    insertAtTail(head1 , 1);
    insertAtTail(head1 , 2);
    insertAtTail(head1 , 3);
    insertAtTail(head1 , 4);
    insertAtTail(head1 , 5);
    insertAtTail(head1 , 6);
    display(head1);

    node * head2 = NULL;
    insertAtTail(head2 , 9);
    insertAtTail(head2 , 10);
    display(head2);
    linker(head1, head2 , 4);
    display(head2);
    display(head1);
    cout << length(head1) << endl;
    cout << length(head2) << endl;

    cout << intersection(head1, head2) << endl;
    return 0;
}