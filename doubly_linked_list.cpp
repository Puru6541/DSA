
// all basic funtion in doubly linked list 
// 1 - insertion 
// 2 - deletion 
// 3 printing

#include<iostream>
using namespace std;
// creating node 
class node{
    public:
    int data;
    node* next;
    node* prev;
    // creating constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
    // creating distructor
    ~node(){
        int val = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory free -> "<< val << endl;
    }
};
// insertion at head
void insertathead(node* &head , int d){
    node* temp = new node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}
// insertion at tail
void insertattail(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
// insertion at any given position
void insertatposition(node* &tail,node* &head, int d,int position){
    // if postion is 1 then we will insertionathead function
    if ( position == 1){
        insertathead(head,d);
        return;
    }
    // code for traversing node at any given point
    node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    // if we insert node at last then we call insertattail function 
    if ( temp -> next == NULL){
        insertattail(tail,d);
        return;
    }
    // code for inserting a node at given position 
    node* n2 = new node(d);
    n2 -> next = temp -> next;
    temp -> next -> prev = n2;
    temp -> next = n2;
    n2 -> prev = temp;
}
// function for deleting a node at any given point 
void deletion(node* &head ,node* &tail, int position){
    // when we delete from 1st position
    if(position == 1 ){
        node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    // we delete node at any  given point 
    else{
        int cnt = 1;
        node* current = head;
        node* temp = NULL;
        while( cnt < position ){
            temp = current;
            current = current -> next;
            cnt ++;
        }
        current -> prev = NULL;
        temp -> next = current -> next;
        current -> next = NULL;
        // code for updating tail
        if(temp -> prev == NULL){
            tail = temp;
        }
        // code for memory free
        current -> next = NULL;
        delete current;
    }
}
// code for display a node
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    node* n1 = new node(10);
    node* head = n1;
    node* tail = n1;
    cout<<"data->"<<n1 -> data<<endl;
    cout<<"prev->"<<n1 -> prev<<endl;
    cout<<"next->"<<n1 -> next<<endl;
    insertathead(head,12);
    insertathead(head,13);
    insertathead(head,14);
    print(head);
    insertattail(tail,15);
    print(head);
    cout<<"new head->"<<head -> data<<endl;
    cout<<"new tail->"<<tail -> data<<endl;
    insertatposition(tail,head,44,1);
    print(head);
    cout<<"update tail -> "<<tail -> data;
    cout<<" updated head -> "<< head -> data<<endl;
    deletion(head , tail, 6);
    cout<<endl;
    print(head);
    cout<<"update tail -> "<<tail -> data;
    cout<<" updated head -> "<< head -> data;
    return 0;
}