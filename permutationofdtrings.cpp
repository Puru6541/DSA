#include<iostream>
#include<cstring>
using namespace std;
// function of permutaion of string using extra array
// void perm(char s[],int k){
//     static int a[10]={0};
//     static char res[10];
//     int i;
//     if(s[k]=='\0'){
//         res[k]='\0';
//         cout<<res<<endl;
//     }
//     else{
//         for(i=0;s[i]!='\0';i++){
//             if(a[i]==0){
//                 res[k]=s[i];
//                 a[i]=1;
//                 perm(s,k+1);
//                 a[i]=0;
//             }
//         }
//     }
// }
// function of permutaion of string using swapping 
// void permswap(char s[],int l,int h){
//     int i;
//     if(l==h){
//         cout<<s<<" ";
//     }
//     else{
//         for(i=l;i<=h;i++){
//             swap(s[l],s[i]);
//             permswap(s,l+1,h);
//             swap(s[l],s[i]);
//         }
//     }
// }

int main(){
    char s[]="ABC";
    int l;
    l=strlen(s);
    permswap(s,0,l-1);
    return 0;
}
