#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
private:
    int health;

public:
    char lavel;
    char *name;
    static int tempValue;

    Hero()
    {
        cout << "Simple Constructre is called" << endl;
        name = new char[100];
    }

    Hero(int health)
    {
        this->health = health;
    }

    int getHealth()
    {
        return health;
    }

    Hero(int health, char lavel)
    {
        this->health = health;
        this->lavel = lavel;
    }
    void print()
    {
        cout << endl;
        cout << "[ Health is: " << health << " ";
        cout << "lavel is: " << lavel << " ";
        cout << "Name is: " << name << " ]";
        cout << endl;
    }
    // Copy constructure
    Hero(Hero &temp)
    {
        // Make a new char array for making the deep copy
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = health;
        this->lavel = lavel;
    }
    char getLavel()
    {
        return lavel;
    }
    char getName()
    {
        return *name;
    }

    void setHealth(int h)
    {
        health = h;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // distructure
    ~Hero()
    {
        cout << "Distructure is called " << " " << endl;
    }
};
int Hero::tempValue = 4;
int main()
{
    // Hero Hero1;
    // Hero1.lavel = 'A';
    // Hero1.setHealth(65);
    // char name[10] = "Dheeraj";
    // Hero1.setName(name);

    // Hero1.print();

    // Hero Hero2(Hero1);

    // Hero2.print();
    // Hero1.name[0] ='G';
    // Hero1.print();
    // Hero2.print();

    // // Using Asignmnent operator to copy the two object

    // Hero1 = Hero2;

    // // Hero 1 value is changed by the value of Hero 2

    // Hero2.print();
    // Hero1.print();

    Hero m;
    cout << m.tempValue << " " << endl;

    // static object creation
    Hero a;
    // for dynamic Object creation we have to call the distructure manually
    Hero *b = new Hero();
    delete b;
}