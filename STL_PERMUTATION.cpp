// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cout<<"enter the string"<<endl;
//     cin>>s;
//     sort(s.begin(),s.end());
//     int count=0;
//     cout<<endl<<"permutation of a given string"<<endl;
//     do{
//         cout<<s<<endl;
//         count++;
//     }while(next_permutation(s.begin(),s.end()));
//     cout<<endl<<count;
//     return 0;
// }



//calculator using oops
// #include<bits/stdc++.h>
// using namespace std;
// class calculator{
//     public:
//     int a,b;
//     void input(){
//         cout<<"enter a"<<endl;
//         cin>>a;
//         cout<<endl<<"enter b"<<endl;
//         cin>>b;

//     }
//     int add(){
//         return a+b;
//     }
//     int mult(){
//         return a*b;
//     }
//     int sub(){
//         return a-b;
//     }
//     int sqaure(){
//         int d;
//         cout<<"enter 1 for square of a"<<endl;
//         cout<<"enter 2 for square of b"<<endl;
//         cin>>d;
//         if(d==1){
//             return a*a;
//         }
//         else if(d==2){
//             return b*b;
//         }
//         else{
//             cout<<" invalid"<<endl;
//         }
//     }



// };
//  int main(){
//     calculator c;
//     int ch;
//     cout<<endl;
//      cout << "Enter 1 to Add 2 Numbers" <<
//             "\nEnter 2 to Subtract 2 Numbers" <<
//             "\nEnter 3 to Multiply 2 Numbers" <<
//             "\nEnter 4 to sqaure 2 Numbers" <<
//             "\nEnter 0 To Exit";
//             cin>>ch;
//     switch (ch)
//     {
//     case 1:
//         c.input();
//         cout<<c.add();
//         break;
//     case 2:
//         c.input();
//         cout<<c.sub();
//         break;
//     case 3:
//         c.input();
//         cout<<c.mult();
//         break;
//     case 4:
//         c.input();
//         cout<<c.sqaure();
//         break;
//     default:
    
//         break;
//     }

//  }






#include<bits/stdc++.h>
using namespace std;
void countword(string str){
    string longest="";
    string word;
    for(int i=0;i<str.length();i++){
         word = "";
        while(str[i] != ' '&& i<str.length()){
            word+= str[i];
            i++;
        }
        if(word.length()>longest.length()){
            
        }
        
    }
    word = "";
    cout<<"longest world is "<<longest<<endl;
}
int main(){
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
    countword(str);
    return 0;
}





