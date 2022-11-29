#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i+1;
            break;
        }
    }
    return -1;
}
int main(){
    int arr[5]={1 , 2, 3, 4, 5}; 
    cout<<linearsearch(arr,5,10);
    return 0;
}