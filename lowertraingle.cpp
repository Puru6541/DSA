#include<iostream>
using namespace std;
void lowertriangle(int arr[][5],int n){
    int i,j,arr1[100][100];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>=j){
                arr1[i][j]=arr[i][j];
            }
            else{
                arr1[i][j]=0;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    lowertriangle(arr,5);
    return 0;
}