#include<iostream>
using namespace std;
void diagonal(int arr[],int n){
    int i;
    int j;
    int m[100][100];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                m[i][j]=arr[i];
            }
            else{
                m[i][j]=0;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
} 
int main(){
    int arr[5]={3,7,4,9,6};
    diagonal(arr,5);
    return 0;
}