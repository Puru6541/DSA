#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
            arr[0] = -1;
            size = 0;
    }
    void insert(int element){
        size = size+1;
        int index = size;
        arr[index] = element;
        while(index>1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    void deletefromheap(){
        if(size == 0){
            cout<<"nothing to delete"<<endl;
        }
        arr[1] = arr[size];
        size--;
        int index = 1;
        while(index < size){
            int leftindex = 2 * index;
            int rightindex = 2* index + 1;
            if(leftindex < size && arr[leftindex] > arr[index]){
                swap(arr[leftindex] , arr[index]);
                index = leftindex;
            }
            else if(rightindex < size && arr[rightindex] > arr[index]){
                swap(arr[index] , arr[rightindex]);
                index = rightindex;
            }
            else{
                return ;
            }
        }

    }
    void heapify(int arr[] , int n , int i){
        int largest = i;
        int left = 2 * i;
        int right = 2 * i +1 ;
        if(left <=n && arr[largest] < arr[left]){
            largest = left;
        if(right <= n && arr[right] > arr[largest]){
            largest = right;
        }
        if(largest != i){
            swap(arr[largest] , arr[i]);
            heapify(arr , n, largest);
        }
    }
    void heapsort(int arr[], int n){
        int size  = n;
        while(size > 1){
            swap(arr[size] , arr[1]);
            size --;
            heapify(arr,n,1);
        }
    }
};