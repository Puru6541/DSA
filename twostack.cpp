#include<iostream>
using namespace std;
class twostack{
    int *arr;
    int size;
    int top1,top2;
    public:
    twostack(int n){
        size =n;
        arr = new int [n];
        top1 = -1;
        top2 = size;
    }
    void push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1] =x;
        }
        else{
            cout<<"stack overflow"<<endl;
            exit(1);
        }
    }
    void push2(int x){
        if(top1 < top2 -1){
            top2--;
            arr[top2]=x;
        }
        else{
            cout<<"stack overflow";
            exit(1);
        }
    }
    int pop1(){
        if(top1>=0){
            int x=arr[top1];
            top1--;
            return x;
        }
        else{
            cout<<"stack underflow";
            exit(1);
        }
    }
    int pop2(){
        if(top2<size){
            int x = arr[top2];
            top2++;
            return x;
        }
        else{
            cout<<"stack underflow";
            exit(1);
        }
    }
};
int main()
{
    twostack st(5);
    st.push1(5);
    st.push2(10);
    st.push2(15);
    st.push1(11);
    st.push2(7);
    cout<<"popped element from stack1 is"<<st.pop1()<<endl;
    st.push2(50);
    cout<<"popped element from satck2 is "<<st.pop2()<<endl;
    return 0;
}