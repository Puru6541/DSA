#include<iostream>
using namespace std;
int queue[10],n=10,front=-1,rear=-1,value;
void insert(){
    if(rear==n-1){
        cout<<"Queue overflow";
    }
    else{
        if(front==-1)
            front=0;
        cout<<"enter value: ";
        cin>>value;
        rear++;
        queue[rear]=value;
    }
}
void remove(){
    if(front==-1 || front>rear){
        cout<<"Queue underflow";
        return;
    }
    else{
        cout<<"element deleted: "<<" "<<queue[front]<<endl;
        queue[front] = -1;
        front++;
        if(front == rear){
            front = -1;
            rear = -1;
        }
    }
}
void display(){
    if(front==-1 || front>rear){
        cout<<"Queue underflow";
        return;
    }
    else{
        cout<<"elements in queue :-"<<" ";
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    insert();
    insert();
    insert();
    display();
    remove();
    display();
}