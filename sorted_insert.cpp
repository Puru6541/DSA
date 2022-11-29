#include<iostream>
using namespace std;
int sorted_insert(int arr[],int n,int x){
    int i=n-1;
    while(arr[i]>x){
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=x;
    n++;
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}
int main(){
    int arr[8]={4,8,13,16,20,25,28,33};
    sorted_insert(arr,8,18);
    return 0;
}