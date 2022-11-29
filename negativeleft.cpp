#include<iostream>
using namespace std;
void negativeleft(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        while(arr[i]<0){
            i++;
        }
        while(arr[j]>0){
            j++;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,-4,-5};
    negativeleft(arr,5);
    return 0;
}