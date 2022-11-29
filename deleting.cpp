#include<iostream>
using namespace std;
void deleting(int arr[],int index,int n){
    int x=arr[index];
    for (int i = index; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
int main(){
    int arr[5]={1 , 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    deleting(arr,2,5);
    return 0;
}