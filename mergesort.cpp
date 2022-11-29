#include<iostream>
using namespace std;
//merging both half array
void merge(int arr[],int low ,int high , int mid){
    int temp[high-low+1];
    int i= low;
    int k=0;
    int j=mid-1;
    while(i<=mid&&j<=high){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=high){
        temp[k++]=arr[j++];
    }
    for(i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
//spliting array in two part
void mergesort(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid=low+(high-low)/2;
        //recursive call
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }
}
int main(){
    int n,i;
    cout<<"enter the number of element"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    // int arr[5]={1,2,5,3,4};
    // int n=5;
    mergesort(arr,0,n-1);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}