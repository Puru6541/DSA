#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    //constructor
    node (int d){
        this -> data = d;
        this -> next = NULL;
    }
    //distructor
    ~node(){
        int value = this -> data;
        if( this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};
void insertion(node* & tail,int element ,int d){
    if(tail == NULL){
        node* temp = new node(d);
        tail = temp;
        temp -> next = temp;
    }
    else{
        node* current = tail;
        while(current -> data != element){
            current = current -> next;
        }
        node* temp = new node(d);
        temp -> next = current -> next;
        current -> next = temp;
    }
}
void deletion(node* &tail, int element){
    if(tail == NULL){
        cout<<"empty list"<<endl;
        return ;
    }
    else{
        node* prev= tail;
        node* current = prev -> next;
        while(current -> data != element){
            prev = current;
            current = current -> next;
        }
        prev -> next = current -> next;
        if(tail == current){
            tail = prev;
        }
        current -> next = NULL;
        delete current;

    }
}
void print(node* tail){
    node* temp = tail;
    do{
        cout<<temp -> data<<" ";
        temp = temp -> next;
    } while(tail != temp);
    cout<<endl;
}
int main(){
    node* n1 = NULL;
    // cout<<n1 -> data;
    node* tail = n1;
    insertion(tail,3, 20);
    insertion(tail,20,22);
    print(tail);
    insertion(tail,20,16);
    print(tail);
    deletion(tail,20);
    print(tail);
    return 0;
}