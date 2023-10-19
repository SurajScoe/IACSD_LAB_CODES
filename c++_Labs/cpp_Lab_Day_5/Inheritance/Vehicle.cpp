/*Vehicle Inheritance:
Problem Statement: Develop a class hierarchy for vehicles. Start with a base class Vehicle and create derived classes like 
Car, Motorcycle, and Truck. Each derived class should have unique properties like the number of wheels and specific 
methods like start_engine().
*/

#include<iostream>
#include<typeinfo>
using namespace std;
class Vehicle{
    private:
    int NoWheels;
    public:
    Vehicle(){
        cout<<"i am defualt Vehicle Constructor !!"<<endl;
    }
    Vehicle(int NoWheels):NoWheels(NoWheels){};
     virtual void start_engine(){
        cout<<"Every vehicle has engine"<<endl;
    }

    void display(){
        cout<<"No of Wheels : "<<NoWheels<<endl;
    }
};

class Car : public Vehicle{
    private:
    int NoWheels;
    public:
    Car(int NoWheels):Vehicle(NoWheels){};
    void start_engine(){
        cout<<"Car has engine !!"<<endl;
    }
    void drive(){
        cout<<"Drive the Car with wheels"<<NoWheels<<endl;
    }
    
};
class MotorCycle : public Vehicle{
    private:
    int NoWheels;
    public:
    MotorCycle(int NoWheels):Vehicle(NoWheels){};
    void start_engine(){
        cout<<"MotorCycle has engine !!"<<endl;
    }
    void ride(){
        cout<<"ride the motorcycle"<<endl;
    }
    
};
class Truck : public Vehicle{
    private:
    int NoWheels;
    public:
    Truck(int NoWheels):Vehicle(NoWheels){};
    void start_engine(){
        cout<<"Truck has engine !!"<<endl;
    }
    void farm(){
        cout<<"Farming with truck."<<endl;
    }
};


int main(){
    // Vehicle v1;
    

    Vehicle *v[4];
    Vehicle v1(2);
    Car c(4);
    MotorCycle mc(2);
    Truck t(4);
    v[0] = &v1;
    v[1] = &mc;
    v[2] = &t;
    v[3] = &c;

    
    for (int i = 0; i < 3; i++)
    {
        /* code */
        v[i]->start_engine();
        if(typeid(*v[i])==typeid(c)){
            /*DownCast*/
            Car *cObj = dynamic_cast<Car*>(v[i]);
            cObj->drive();
        }
        else if(typeid(*v[i])==typeid(t)){
            Truck *tobj = dynamic_cast<Truck*>(v[i]);
            tobj->farm();
        }
        else if(typeid(*v[i])==typeid(mc)){
            MotorCycle *mcObj = dynamic_cast<MotorCycle*>(v[i]);
            mcObj->ride();
        }
    }
    
}