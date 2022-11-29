#include<bits/stdc++.h>
using namespace std;
class vechile{
    private:
    string name;
    string model;
    string fuel;
    string manufacturing;
    public:
    string getmodel(){
        return model;
    }
    string getfuel(){
        return fuel;
    }
    string getname(){
        return name;
    }
    string getmanufacturing(){
        return manufacturing;
    }
    void setname(string name){
        this-> name = name;
    }
    void setmanufacturing(string manufacturing){
        this -> manufacturing = manufacturing;
    }
    void setfuel(string fuel){
        this-> fuel = fuel;
    }
    void setmodel(string model){
        this -> model = model;
    }

};
class car:public vechile{
    public:
    void drive(){
        cout<<"TODAY SAURABH IS DRIVING CAR: ";
    }
};
class bike:public vechile{
    public:
    void drive(){
        for(int i =0;i<40;i++){
            cout<<"*";
        }
        cout<<endl;
        cout<<"TODAY SAURABH IS DRIVING BIKE:"<<endl;
    }
};
int main(){
    car saurabh;
    bike saurabh1;
    cout<<endl;
    saurabh.drive();
    cout<<endl;
    saurabh.setfuel("DIESEL");
    saurabh.setmanufacturing("MADE IN INDIA");
    saurabh.setname("HONDA ACCORD");
    saurabh.setmodel("NEW");
    cout<<endl;
    cout<<saurabh.getname()<<endl;
    cout<<saurabh.getfuel()<<endl;
    cout<<saurabh.getmanufacturing()<<endl;
    cout<<saurabh.getmodel()<<endl<<endl;
    saurabh1.drive();
    cout<<endl;
    saurabh1.setfuel("PETROL");
    saurabh1.setmanufacturing("IMPORTED");
    saurabh1.setname("DUCATI");
    saurabh1.setmodel("OLD");
    cout<<saurabh1.getname()<<endl;
    cout<<saurabh1.getfuel()<<endl;
    cout<<saurabh1.getmanufacturing()<<endl;
    cout<<saurabh1.getmodel()<<endl;
    
    
}