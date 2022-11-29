#include<iostream>
using namespace std;
// creation of node
class node{
    public:
    int data;
    node* next;
    // creating constructor 
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    //  creating destructor
    ~node(){
        int value = this -> data;
        //memory free code
        if(this -> next != NULL){
            delete next;
            this -> next =NULL;
        }
        cout<<"memory free = "<<value<<endl;
    }
};



// inserting node at head
void insertathead(node* &head,int d){
    node* n3 = new node(d);
    n3 -> next = head;
    head = n3;
}
// inserting node at tail
void insertattail(node* &tail,int d){
    node* n4 = new node(d);
    tail -> next = n4;
    tail = n4;
}
// inserting at given position
void insertatmiddle(int postion ,node* &tail, node* &head, int d){
    //if inserting elements at 1st place
    if(postion == 1){
        insertathead(head,d);
    }
    
    node* temp = head;
    int cnt = 1;
    while(cnt <= postion-1){
        temp = temp -> next;
        cnt++;
    }
    node* n6 = new node(d);
    n6 -> next = temp -> next;
    temp -> next = n6;
    //if inserting element at last place
    if(n6 -> next == NULL){
        insertattail(tail,d);
    }
}
void deleteatpostion (node* &tail,node* &head,int postion){
    node* check = tail;
    if(postion == 1){
        node* temp = head;
        head = head -> next;
        //memory free 
        temp ->next = NULL;
        delete temp;
    }
    else{
        node* current = head;
        node* prev = NULL;
        int cnt =1;
        while (cnt < postion ){
            prev = current ;
            current = current -> next;
            cnt++;
        }
        prev -> next = current -> next;
        if(prev -> next == NULL){
        tail = prev;
    }
    //memory free
    current -> next = NULL;
    delete current ;
        
    }

}
// printing all nodes
void print (node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* n1 = new node(10);
    // pointing head on first node 
    node* head = n1;
    // pointing tail on first node 
    node* tail = n1;
    // print(head);
    insertathead(head,12);
    insertathead(head,13);
    insertathead(head,15);
    insertathead(head,16);
    insertattail(tail,18);
    // insertatmiddle(6,tail,head ,20);
    print(head);
    cout<<"head-> "<<head -> data<<endl;
    cout<<"tail-> "<<tail -> data<<endl;
    deleteatpostion(tail,head,1);
    print(head);
    cout<<"tail-> "<<tail -> data<<endl;
    cout<<"head-> "<<head -> data<<endl;
    return 0;
}