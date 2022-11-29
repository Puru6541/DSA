#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n;
    vector<int>v;
    v.emplace_back(1);
    v.emplace_back(2);
    cout<<"insert the element in the array"<<endl;
    v.insert(v.begin()+2,100);
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>a;
        v.emplace_back(a);
    }
    vector<int>:: iterator it = v.begin();
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<"insert the element in the array"<<endl;
    v.insert(v.begin()+2,100);
    return 0;
}