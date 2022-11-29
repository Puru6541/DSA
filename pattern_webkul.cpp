#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=(n+1)/2;i++){
        for (int j = 0; j <= n; j++)
        {
            if(j>=(n-1)-i&&j<=i+(n-3)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }        
        }
        cout<<endl;
    }
    for(int k=((n+1)/2+1);k<=n+1;k++){
        for(int l=1;l<=n;l++){
            if(l==1 || l==n){
                cout<<"@";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=n+2;i<=((n+1)+(n+1)/2);i++){
        for(int j=1;j<=n;j++){
            if(i<(n+1)+(n+1)/2&&(j==1||j==n)){
                cout<<"@";
            }
            else if(j>=((n*2)-i)&&j<=(i-(n-1))){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}