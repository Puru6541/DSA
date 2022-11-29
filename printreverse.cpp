#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void Rprint(node* &head){
    if(head != NULL){
        Rprint(head -> next);
        cout<< head -> data<<" ";
    }
}
void insertathead(node* &head,int d){
    node* n3 = new node(d);
    n3 -> next = head;
    head = n3; 
}
void print (node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head = NULL;
    insertathead(head ,10);
    insertathead(head , 20);
    insertathead(head , 30);
    Rprint(head);
    return 0;
}
