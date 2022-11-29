#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(15);
    q.push(17);
    q.push(18);
    cout<<"size of queue is :-"<<q.size()<<endl;
    cout<<"front element of queue :-"<<q.front();
    q.pop();
    cout<<"front element of queue :-"<<q.front()<<endl;
    cout<<"size of queue is :-"<<q.size()<<endl;
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    return 0;
}

