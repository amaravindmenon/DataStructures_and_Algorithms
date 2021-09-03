#include <iostream>

using namespace std;

// function overloading
class A
{
public:
    void fun()
    {
        cout << "Fun with no args" << endl;
    }

    void fun(int a)
    {
        cout << "Fun with int args" << endl;
    }

    void fun(double a)
    {
        cout << "Fun with double args" << endl;
    }
};

// operator overiding

class Complex
{
    int real, img;

public:
    Complex()
    {
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.img = img + obj.img;
        res.real = real + obj.real;
        return res;
    }

    void display()
    {
        cout << real << " + i" << img << endl;
    }
};

// overiding
class Base
{
public:
    virtual void print()
    {
        cout << "base class print" << endl;
    }

    void display()
    {
        cout << "base class display" << endl;
    }
};

class Drived : public Base
{
public:
    void print()
    {
        cout << "drived class print" << endl;
    }

    void display()
    {
        cout << "drived class display" << endl;
    }
};

main()
{
    // A obj;
    // obj.fun(2.0);

    // Complex cl(12, 7);
    // Complex c2(6, 7);
    // Complex c3 = cl + c2;
    // c3.display();

    Base *baseptr;
    Drived d;

    baseptr = &d;
    
    baseptr->print();
    baseptr->display();
}