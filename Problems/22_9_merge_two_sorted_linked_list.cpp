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

node * merge(node* &head1 , node* &head2){
    node * dummyNode = new node(0);
    node * ptr1 = head1;
    node * ptr2 = head2;
    node * ptr3 = dummyNode;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data < ptr2->data){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    while(ptr1!=NULL){
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3= ptr3->next;
    }

    while(ptr2!=NULL){
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3= ptr3->next;
    }
    return dummyNode->next;
    
}

node * mergeRecursive(node* head1 , node* head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }

    node * result;

    if(head1->data <head2->data){
        result = head1;
        result->next = mergeRecursive(head1->next,head2);
    }else{
        result = head2;
        result->next = mergeRecursive(head1,head2->next);
    }

    return result;
}

int main(){
    node * head1 = NULL;
    insertAtTail(head1 , 1);
    insertAtTail(head1 , 4);
    insertAtTail(head1 , 5);
    insertAtTail(head1 , 7);
    display(head1);

    node * head2 = NULL;
    insertAtTail(head2 , 2);
    insertAtTail(head2 , 3);
    insertAtTail(head2 , 6);

    display(head2);
    // node* head = merge(head1 , head2);
    node * head = mergeRecursive(head1 , head2) ;
    display(head);    
    return 0;
}