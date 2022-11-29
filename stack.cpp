#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int top;
    int size;
    stack(int size){
        this -> size = size;
        arr = new int [size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top ++;
            arr[top] = element;
        }
        else {
            cout<<"stack overflow "<<endl;
        }
    }
    void pop(){
        if(top >= 0){
            top --;
        }
        else{
            cout<<"satck underflow "<<endl;
        }
    }
    int peak(){
        if(top >= 0){
            return arr[top];
        }
        else{
            return -1;
        }
    }
    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    stack st(5);
    for(int i=10; i<15; i++){
        st.push(i);
    }
    for(int j =10; j<15; j++){
        st.pop();
    }
    cout<<"Top element of stcak"<<st.peak()<<endl;
    if(st.isempty()){
        cout<<"stack empty"<<endl;
    }
    else{
        cout<<"stack is not empty" <<endl;
    }
}