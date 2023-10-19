/*Animal Hierarchy:
Problem Statement: Create a hierarchy of animal classes. Start with a base class Animal and then create derived classes like Mammal, Bird, and Fish. Each of these derived classes should have specific properties and methods related to their respective categories of animals.
*/
#include<iostream>
using namespace std;

class Animal
{
// private:
    /* data */
protected:
string name;
string habbits;
public:
    Animal(string name, string habbits):name(name),habbits(habbits){};
    // ~Animal();

    void eat(){
        cout<<name<<" is eathing !!"<<endl;
    }

    void sound(){
        cout<<name<<" has habbit of "<<habbits<<endl;
    }


};

class Mammal : public Animal{
    private:
    bool furr;

    public:
    // Mammal(string name, string habbits,bool furr):Animal(name,habbits){
    //     this->name = name;
    //     this->habbits = habbits;
    // }

    /*This is same as above its called memeber initilizer constructor list*/
    Mammal(string name, string habbits, bool fur):Animal(name,habbits),furr(furr){};

    /*Ovveriden methods*/
    void eat(){
        cout<<name<<" may eat grass, other living habbits for servival !!"<<endl;
    }

    /*Ovveriden methods*/
    void sound(){
        cout<<name<<" make sound like !!"<<habbits<<endl;
    }

    /*Mammal Specific Mfs*/
    void BirthMammal(){
        cout<<name<<" do not lay eggs "<<endl;
    }

};



class Bird : public Animal{
    private:
    bool fly;

    public:
    // Bird(string name, string habbits,bool furr):Animal(name,habbits){
    //     this->name = name;
    //     this->habbits = habbits;
    // }

    /*This is same as above its called memeber initilizer constructor list*/
    Bird(string name, string habbits, bool fly):Animal(name,habbits),fly(fly){};

    /*Ovveriden methods*/
    void eat(){
        cout<<name<<" may eat other living habbits for servival !!"<<endl;
    }

    /*Ovveriden methods*/
    void sound(){
        cout<<name<<" make sound like !!"<<habbits<<endl;
    }

    /*Mammal Specific Mfs*/
    void BirthBird(){
        cout<<name<<" do lay eggs "<<endl;
    }

};


class Fish : public Animal{
    private:
    bool CanSwimm;

    public:
    // Fish(string name, string habbits,bool swimm):Animal(name,habbits){
    //     this->name = name;
    //     this->habbits = habbits;
    // }

    /*This is same as above its called memeber initilizer constructor list*/
    Fish(string name, string habbits, bool CanSwimm):Animal(name,habbits),CanSwimm(CanSwimm){};

    /*Ovveriden methods*/
    void eat(){
        cout<<name<<" may eat other algae or living habbits for servival !!"<<endl;
    }

    /*Ovveriden methods*/
    void sound(){
        cout<<name<<" make sound like !!"<<habbits<<endl;
    }

    /*Mammal Specific Mfs*/
    void BirthFish(){
        cout<<name<<" do lay eggs "<<endl;
    }

};


int main()
{
    Mammal m("dog","bark",true);
    Bird b("Sparrwo","twick",true);
    Fish f("shark","fish like sound",false);

    Animal *an[3];
    an[0] = &m;
    an[1] = &b;
    an[2] = &f;

    for (int i = 0; i < 3; i++)
    {
        /* code */
        an[i]->eat();
        an[i]->sound();
    }

    m.BirthMammal();
    b.BirthBird();
    f.BirthFish();
    

}