#include <iostream>

using namespace std;

class A
{
public:
    int a;
    void funa()
    {
        cout << "Fun a" << endl;
    }

private:
    int b;
    void funb()
    {
        cout << "Fun b" << endl;
    }

protected:
    int c;
    void func()
    {
        cout << "Fun c" << endl;
    }
};

class B : public A{

};

int main(){ 
    B obj;
    obj.funa();
    
}