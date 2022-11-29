#include<iostream>
using namespace std;
int binarysearch(int arr[],int key,int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<binarysearch(arr,6,5);
    return 0;
}