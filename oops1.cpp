#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
    int health;
    char level;
    string name;
    public:
    Hero(int a, char b, string name ){
        this -> name = name;
        this-> level= b;
        this-> health = a;
    }
    int gethealht(){
        return health;
    }
    char getlevel(){
        return level;
    }
    string getname(){
        return name;
    }
     void sethealth(int h){
        this -> health = h;
    }
    void setlevel(char a){
        this -> level = a;
    }
    void setname(string name){
        this -> name = name;
    }

};
int main(){
    Hero r(70,'B',"puru");
    // r.sethealth(70);
    cout<<"health is"<<r.gethealht()<<endl;
    cout<<"level is "<<r.getlevel()<<endl;
    cout<<"name is "<<r.getname()<<endl;
    // Hero *b = new Hero(80,'c',"singh");
    // cout<<"health"<<b->gethealht()<<endl;
    // cout<<"level"<<b->getlevel()<<endl;
    // cout<<"name "<<b->getname()<<endl;
}