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


node * reversek(node* &head , int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    int count = 0;
    while(currptr!=NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if(nextptr!=NULL){
        head->next = reversek(nextptr , k);
    }

    return prevptr;
}

void makeCycle(node* &head , int pos){
    node* ptr = head;
    node* startNode;
    int count = 1;
    while(ptr->next!=NULL){
        ptr = ptr->next;
        if(pos==count){
            startNode = ptr;
        }
        count++;
    }
    ptr->next = startNode;
}

bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow){
            return true;
        }
    }

    return false;
}

void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            fast = head;
            break;
        }
    }
    while(fast->next!=slow->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
    return;
}

int main(){
    node * head = NULL;
    insertAtTail(head , 1);
    insertAtTail(head , 2);
    insertAtTail(head , 3);
    insertAtTail(head , 4);
    insertAtTail(head , 5);
    insertAtTail(head , 6);
    cout << detectCycle(head) << endl;
    makeCycle(head, 3);
    cout << detectCycle(head) << endl;
    removeCycle(head);
    cout << detectCycle(head) << endl;
    display(head);
    return 0;
}