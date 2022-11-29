#include<iostream>
using namespace std;
// creating  node
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *p;
    p=new node;
    p->data=10;
    p->next=NULL;
    cout<<p->data;
    cout<<p->next;
    return 0;
}