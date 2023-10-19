/*3:Create abstract class Fruit with abstract function taste
Create derived classes for Fruit:Apple,Mango,Orange
Implement abstract method in derived class ,add specific methods like juice(),jam(),pulp() in respective derived class(as discussed in lect);

create taster program.create fruit basket and invoke method
Use:dynamic_cast,typeid*/
#include <iostream>
// #include"Fruit.h"
#include <typeindex>
using namespace std;

class Fruit
{
private:
    /* data */

    string name;
    string color;
    int weight;

public:
    Fruit()
    {

        name = "Apple";
        color = "Dark red";
        weight = 10;
    };
    Fruit(string name, string color, int weight)
    {
        this->name = name;
        this->color = color;
        this->weight = weight;
    }
    virtual void taste() = 0;
};

class Apple : public Fruit
{
private:
public:
    void jam()
    {
        cout << "I have Apple jam!!" << endl;
    }
    void taste()
    {
        cout << "--------Apple have sweet and sourus taste--------" << endl;
    }
};
class Mango : public Fruit
{
private:
public:
    void pulp()
    {
        cout << "I have Mango pulp!!" << endl;
    }
    void taste()
    {
        cout << "--------Mango have good taste--------" << endl;
    }
};

class orange : public Fruit
{
private:
public:
    void juice()
    {
        cout << "I have orange juice" << endl;
    }
    void taste()
    {
        cout << "--------orange have healthy taste--------" << endl;
    }
};

int main()
{
//     Apple a2;
//     orange o;
//     Mango m;

    /*Upcasting here*/
    // Fruit *f;
    // f = &a;
    // f->taste();
    // f = &o;
    // f->taste();
    // f = &m;
    // f->taste();

    /*DownCasting here*/ // to access the MFs of Derived Class
    // Apple *a1 = dynamic_cast<Apple *>(f);

    // a1->taste(); // this will call the MF of child class Apple

    Fruit *basket[3];
    // Fruit fobj; // We can't create obj of abstract class
    Apple a;
    orange O;
    Mango M;

    basket[0] = &a;
    basket[1] = &O;
    basket[2] = &M;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        basket[i]->taste();
        if (typeid(*basket[i]) == typeid(Apple))
        {

            Apple *aobj = dynamic_cast<Apple *>(basket[i]);

            aobj->jam();
        }
        else if (typeid(*basket[i]) == typeid(Mango))
        {
            /* code */
            Mango *Mobj = dynamic_cast<Mango *>(basket[i]);
            Mobj->pulp();
        }
        else if (typeid(*basket[i]) == typeid(orange))
        {
            orange *Oobj = dynamic_cast<orange *>(basket[i]);
            Oobj->juice();
        }
    }

    return 1;
}
