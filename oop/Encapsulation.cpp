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


int main(){ 
    A obj;
    obj.funa();
}