#include<bits/stdc++.h>
using namespace std;
void reverse(string &str){
    int n= str.lenght();
    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-1-i]);
    }
    cout<<str;
}
int main(){
    string str;
    cout<<"enter string "<<endl;
    cin>>str;
    cout<<reverse(str);
    cout<<"endl";
    return 0;

}