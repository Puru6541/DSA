#include<bits/stdc++.h>
using namespace std;
int main(){
    // creation in pair
    pair<int,int>p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;
    
    // creation of nested pair
    pair<int, pair<int,int>>q = {1,{2,3}};
    cout<<q.first<<" ";
    cout<<q.second.first<<endl;
    cout<<q.second.second<<endl;
    // array using pair
    pair<int,int>arr[]= { {1,2},{3,4},{5,6}};
    cout<<arr[1].first;

    pair<int,int>puru;
    cout<<"enter the elements in pair"<<endl;
    for(int i =0;i<6;i++){
        cout<<"enter the "<<i<<" pair"<<endl;
        cin>>puru.first;
        cin>>puru.second;
    }
    cout<<puru.first<<" "<<puru.second;
    // insert pairs in array 
    pair<int,int>arr1[100];
    cout<<"enter the elements in array in pair wise"<<endl;
    for(int i =0;i<5;i++){
        cout<<"enter the "<<i<<" pair in array"<<endl;
        cin>>arr1[i].first;
        cin>>arr1[i].second;
    }
    cout<<"array after insertion"<<endl<<endl<<endl;
    for(int i=0;i<5;i++){
        cout<<i<<"  Pair in array :->";
        cout<<arr1[i].first<<" "<<arr1[i].second<<endl;
    }
    return 0;
}
