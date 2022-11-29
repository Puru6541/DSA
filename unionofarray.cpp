#include<iostream>
using namespace std;
void merging(int arr1[],int arr2[],int n1,int n2){
    int n=n1+n2;
    int arr3[n];
    int i=0;
    int j=0;
    int k=0;
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else if(arr1[i]>arr2[j]){
            arr3[k]=arr1[j];
            j++;
            k++;
        }
        else{
            arr3[k]=arr1[i];
            k++;
            i++;
        }
    }
    for(;i<n1;i++){
        arr3[k]=arr1[i];
        k++;
    }
    for(;j<n2;j++){
        arr3[k]=arr2[j];
        k++;
    }
    for(k=0;k<n;k++){
        cout<<arr3[k]<<" ";
    }
}
int main(){
    int arr1[5]={3,4,5,6,10};
    int arr2[5]={12,4,7,2,5};
    merging(arr1,arr2,5,5);
    return 0;
}