#include<iostream>
using namespace std;
int  inserting (int arr[], int index,int x, int n){
    for(int i = n; i > index; i--){
        arr[i]=arr[i-1];
    }
    arr[index]=x;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[5]={1 , 2, 3, 4, 5};
    inserting(arr,3, 15, 5);
    return 0;
}