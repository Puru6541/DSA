#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};
class stack{
    node* front;
    public:
    stack(){
        front = NULL;
    }
    void push(int d){
        node *temp;
	    temp = new node(d);
	    if(front == NULL)
	    {
		    temp->next = NULL;
	    }
	    else
	    {
		    temp->next = front;
	    }
	    front = temp;
    }
    void pop(){
        if(front == NULL)
		    cout << "UNDERFLOW\n";
	    else
	    {
		    node *temp = front;
		    front = front->next;
		    delete(temp);
	    }
    }
    int top(){
        return front->data;
    }
};
int main(){
    stack st;
    st.push(50);
    st.push(60);
    st.push(70);
    cout<<"stack top element is "<<" "<<st.top()<<endl;
    st.pop();
    cout<<"stack top element is "<<" "<<st.top()<<endl;
    st.pop();
    cout<<"stack top element is "<<" "<<st.top()<<endl;
    st.pop();
    st.pop();

    return 0;
}