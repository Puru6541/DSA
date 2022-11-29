#include<iostream>
using namespace std;
int rbs(int arr[],int s,int e,int key){
    if(s<=e){
        int mid=(s+e)/2;
        if(key==arr[mid]){
            return mid+1;
        }
        else if(key<arr[mid]){
            return rbs(arr,s,mid-1,key);
        }
        else{
            return rbs(arr,mid+1,e,key);
        }
    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<rbs(arr,0,4,3);
    return 0;
}